#include "SwapFrontToGear.h"

SwapFrontToGear::SwapFrontToGear() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::driveTrain.get());
}

// Called just before this Command runs the first time
void SwapFrontToGear::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void SwapFrontToGear::Execute() {
	Robot::driveTrain.get()->switchFront(true);
}

// Make this return true when this Command no longer needs to run execute()
bool SwapFrontToGear::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void SwapFrontToGear::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SwapFrontToGear::Interrupted() {

}
