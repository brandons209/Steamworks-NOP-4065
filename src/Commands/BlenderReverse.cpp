#include "BlenderReverse.h"

BlenderReverse::BlenderReverse() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	SetTimeout(3);
	Requires(Robot::loader.get());
}

// Called just before this Command runs the first time
void BlenderReverse::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void BlenderReverse::Execute() {
	Robot::loader.get()->blenderReverse();
}

// Make this return true when this Command no longer needs to run execute()
bool BlenderReverse::IsFinished() {
	return IsTimedOut();
}

// Called once after isFinished returns true
void BlenderReverse::End() {
	Robot::loader.get()->lastCommand = false;
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void BlenderReverse::Interrupted() {
	End();
}
