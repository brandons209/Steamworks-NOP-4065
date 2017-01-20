#include "UpdatePosition.h"

UpdatePosition::UpdatePosition() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void UpdatePosition::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void UpdatePosition::Execute() {
	Robot::driveTrain.get()->updatePos();
}

// Make this return true when this Command no longer needs to run execute()
bool UpdatePosition::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void UpdatePosition::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void UpdatePosition::Interrupted() {

}
