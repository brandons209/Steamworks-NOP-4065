#include "ResetAngle.h"

ResetAngle::ResetAngle() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void ResetAngle::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void ResetAngle::Execute() {
	Robot::driveTrain.get()->resetAngle();
}

// Make this return true when this Command no longer needs to run execute()
bool ResetAngle::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void ResetAngle::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ResetAngle::Interrupted() {

}
