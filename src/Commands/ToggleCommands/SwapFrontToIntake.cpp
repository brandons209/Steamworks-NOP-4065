#include "SwapFrontToIntake.h"

SwapFrontToIntake::SwapFrontToIntake() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::driveTrain.get());
}

// Called just before this Command runs the first time
void SwapFrontToIntake::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void SwapFrontToIntake::Execute() {
	Robot::driveTrain.get()->switchFront(false);
}

// Make this return true when this Command no longer needs to run execute()
bool SwapFrontToIntake::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void SwapFrontToIntake::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SwapFrontToIntake::Interrupted() {

}
