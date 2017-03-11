#include "RotateFarthest.h"

RotateFarthest::RotateFarthest() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::driveTrain.get());
}

// Called just before this Command runs the first time
void RotateFarthest::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void RotateFarthest::Execute() {
	double degreeConversion = 180/M_PI;
	double targetAngle;
	double realX = Robot::driveTrain.get()->realX;
	double realY = Robot::driveTrain.get()->realY;

	if(0 - realX < 0){
		targetAngle = 180 + (atan( realY - 118.47 / realX - 212.87 ) * degreeConversion);
	}else{
		targetAngle = atan( realY - 118.47 / realX - 112.87 ) * degreeConversion;
	}
	Robot::driveTrain.get()->rotate(targetAngle);
}

// Make this return true when this Command no longer needs to run execute()
bool RotateFarthest::IsFinished() {
	return Robot::driveTrain.get()->isFinished;
}

// Called once after isFinished returns true
void RotateFarthest::End() {
	Robot::driveTrain.get()->isFinished = false;
	Robot::driveTrain.get()->I = 0;
	Robot::driveTrain.get()->stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RotateFarthest::Interrupted() {
	End();
}
