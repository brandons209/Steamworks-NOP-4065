#include "RobotAngleLeft.h"

RobotAngleLeft::RobotAngleLeft() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void RobotAngleLeft::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void RobotAngleLeft::Execute() {
	Robot::driveTrain.get()->reduceAngle();
}

// Make this return true when this Command no longer needs to run execute()
bool RobotAngleLeft::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void RobotAngleLeft::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RobotAngleLeft::Interrupted() {

}
