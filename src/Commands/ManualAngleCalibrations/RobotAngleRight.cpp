#include "RobotAngleRight.h"

RobotAngleRight::RobotAngleRight() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void RobotAngleRight::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void RobotAngleRight::Execute() {
	Robot::driveTrain.get()->increaseAngle();
}

// Make this return true when this Command no longer needs to run execute()
bool RobotAngleRight::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void RobotAngleRight::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RobotAngleRight::Interrupted() {

}
