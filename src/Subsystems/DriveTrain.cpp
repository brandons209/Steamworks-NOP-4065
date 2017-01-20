// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "CANTalon.h"


#include "DriveTrain.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "../Commands/TankDrive.h"
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

DriveTrain::DriveTrain() : Subsystem("DriveTrain") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    leftFront = RobotMap::driveTrainleftFront;
    rightFront = RobotMap::driveTrainrightFront;
    leftBack = RobotMap::driveTrainleftBack;
    rightBack = RobotMap::driveTrainrightBack;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    ahrs = RobotMap::driveTrainahrs;
    I = 0;
    isFinished = false;

    realX = 0;
    realY = 0;

    rawX = 0;
    rawY = 0;
}

void DriveTrain::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

        SetDefaultCommand(new TankDrive());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}

void DriveTrain::tankDrive(std::shared_ptr<Joystick> driveStick){

	double leftValue = -1 * driveStick.get()->GetRawAxis(1);
	double rightValue = driveStick.get()->GetRawAxis(3);

	if(fabs(leftValue) > 0.1 || fabs(rightValue) > 0.1){
			leftFront.get()->Set(leftValue);
			leftBack.get()->Set(leftValue);
			rightFront.get()->Set(rightValue);
			rightBack.get()->Set(rightValue);
		}else{
			leftFront.get()->Set(0);
			leftBack.get()->Set(0);
			rightFront.get()->Set(0);
			rightBack.get()->Set(0);
		}
}

void DriveTrain::rotate(double targetAngle){

	double currentAngle = ahrs.get()->GetAngle(), P;
	//double D = lastP - P;

	while(currentAngle > 360){
		currentAngle -= 360;
	}

	while(currentAngle < 0){
		currentAngle += 360;
	}

	P = targetAngle - currentAngle;
	I += P;

	leftFront.get()->Set(P*RobotMap::kP + I*RobotMap::kI /*- D*kD*/);
	leftBack.get()->Set(P*RobotMap::kP + I*RobotMap::kI /*- D*kD*/);
	rightFront.get()->Set(P*RobotMap::kP + I*RobotMap::kI /*- D*kD*/);
	rightBack.get()->Set(P*RobotMap::kP + I*RobotMap::kI /*- D*kD*/);

	if(P > -0.5 && P < 0.5){
		isFinished = true;
	}else{
		isFinished = false;
	}


}
// Put methods for controlling this subsystem
// here. Call these from Commands.

void DriveTrain::updatePos(){
	const double deltaT = 0.004;//4ms update time on encoder

	rawX = ( (rawX + (RobotMap::distanceOmniWheelCircumference * leftFront->GetPulseWidthVelocity() / 60.0) ) / 2 ) * deltaT;
	rawY = ( (rawY + (RobotMap::distanceOmniWheelCircumference * leftBack->GetPulseWidthVelocity() / 60.0) ) / 2 ) * deltaT;

	double radiansConversion = M_PI/180;
	double degreeConversion = 180/M_PI;

	double theata = ahrs->GetAngle() * radiansConversion;
	double alpha = (M_PI/2) - theata;

	double xOffset, yOffset = SmartDashboard::GetNumber("Y distance from center of boiler", 0);

	if(SmartDashboard::GetString("alliance color for boiler side:(red or blue)", "red") == "red"){
		xOffset = -1 * SmartDashboard::GetNumber("X distance from center of boiler", 0);
	}else{
		xOffset = SmartDashboard::GetNumber("X distance from center of boiler", 0);
	}

	realX = (rawX * (cos(theata) * degreeConversion) + rawY * (cos(alpha) * degreeConversion) ) + xOffset; //-x from center of boiler, depending on side of field
	realY = (rawX * (sin(theata) * degreeConversion) + rawY * (sin(alpha) * degreeConversion) ) - yOffset; //- y from center of boiler

	SmartDashboard::PutNumber("Raw X", rawX);
	SmartDashboard::PutNumber("Raw Y", rawY);

	SmartDashboard::PutNumber("Real X", realX);
	SmartDashboard::PutNumber("Real Y", realY);

}


void DriveTrain::driveForward(){

	double leftValue = -0.75, rightValue = 0.75;

	leftFront.get()->Set(leftValue);
	leftBack.get()->Set(leftValue);
	rightFront.get()->Set(rightValue);
	rightBack.get()->Set(rightValue);
}

void DriveTrain::stop(){
	leftFront.get()->Set(0);
	leftBack.get()->Set(0);
	rightFront.get()->Set(0);
	rightBack.get()->Set(0);
}

void DriveTrain::driveToPoint(double xTargetPos, double yTargetPos){

	updatePos();

	if(realX != xTargetPos && realY != yTargetPos){
		driveForward();
	}else{
		isFinished = true;
		stop();
	}

}

