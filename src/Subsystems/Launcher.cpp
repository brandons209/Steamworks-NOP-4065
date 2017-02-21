// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "Launcher.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

Launcher::Launcher() : Subsystem("Launcher") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    launcherMotor = RobotMap::launcherlauncherMotor;
    angleChanger = RobotMap::launcherangleChanger;
    //anglePot = RobotMap::launcheranglePot;
    angleEncoder = RobotMap::launcherangleEncoder;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    desiredAngle = 0;
    currentAngle = 0;
    shortVelocity = 160;//160 is ok //inches/sec
    longVelocity = 260; //inches/sec
    I = 0;
    I2 = 0;
    manualAngle = 0;

    launcherEncoder = RobotMap::launcherlauncherEncoder;

}

void Launcher::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void Launcher::reduceAngle(){
	manualAngle--;
}

void Launcher::increaseAngle(){
	manualAngle++;
}

void Launcher::calculateAngle(){
	const double gravConst = 386.09;
	const double towerHeight = 97.0;
	const double launchV = shortVelocity;

	double x = SmartDashboard::GetNumber("Real X", 0);
	double y = SmartDashboard::GetNumber("Real Y", 0);

	//double x = 5, y = 5;

	double distanceFromBoiler = sqrt( (pow(x, 2) + pow(y, 2)) );

	double a = (-0.5 * gravConst * pow(distanceFromBoiler, 2) ) / (pow(launchV, 2));
	double c = a - towerHeight;

	SmartDashboard::PutNumber("Direct distance to boiler", distanceFromBoiler);
	//SmartDashboard::PutNumber("A", a);
	//SmartDashboard::PutNumber("C", c);

	desiredAngle = manualAngle + (atan( ( ( (-1.0 * distanceFromBoiler) - sqrt( abs( (pow(distanceFromBoiler, 2)) - (4.0*a*c) ) ) ) / (2.0 * a) ) ) * (180.0/M_PI) );
	SmartDashboard::PutNumber("launcher Angle", desiredAngle);
}

void Launcher::moveToAngle(){
	calculateAngle();

	const double kP = 0.05;
	const double kI = 0.00000001;

	currentAngle = angleEncoder->GetDistance() + 40;
	SmartDashboard::PutNumber("Current Angle", currentAngle);
	double P = desiredAngle - currentAngle;
	I += P;

	angleChanger->Set(P*kP + I*kI);

	//reset I in command

}

void Launcher::launchFam(){
	//double x = SmartDashboard::GetNumber("Real X", 0);
	//double y = SmartDashboard::GetNumber("Real Y", 0);
	//double distanceFromBoiler = sqrt( (pow(x, 2) + pow(y, 2)) );
	double desiredVelocity;

	//if(distanceFromBoiler < 250){//250 inches
		desiredVelocity = shortVelocity;
	//}else{
		//desiredVelocity = longVelocity;
	//}

	const double kP = 0.03;
	const double kI = 0.000000000001;
	double currentVelocity = launcherEncoder->GetRate();
	SmartDashboard::PutNumber("Desired Launcher Velocity", desiredVelocity);
	SmartDashboard::PutNumber("Launcher Velocity", currentVelocity);

	double P = desiredVelocity - currentVelocity;
	I2 += P;

	launcherMotor->Set(-1.0 * (P*kP + I*kI));

	//launcherMotor->Set(-0.5);

	/*if(isLinedUp){
		//load
	}else{
		//dont load
	}*/

}
