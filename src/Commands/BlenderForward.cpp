#include "BlenderForward.h"

BlenderForward::BlenderForward() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	SetTimeout(2);
	Requires(Robot::loader.get());
}

// Called just before this Command runs the first time
void BlenderForward::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void BlenderForward::Execute() {
	Robot::loader.get()->blenderForward();
}

// Make this return true when this Command no longer needs to run execute()
bool BlenderForward::IsFinished() {
	return IsTimedOut();
}

// Called once after isFinished returns true
void BlenderForward::End() {
	Robot::loader.get()->lastCommand = true;
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void BlenderForward::Interrupted() {
	End();
}
