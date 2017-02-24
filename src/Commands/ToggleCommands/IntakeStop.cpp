#include "IntakeStop.h"

IntakeStop::IntakeStop() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::intakeAndWinch.get());
}

// Called just before this Command runs the first time
void IntakeStop::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void IntakeStop::Execute() {
	Robot::intakeAndWinch.get()->stop();
}

// Make this return true when this Command no longer needs to run execute()
bool IntakeStop::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void IntakeStop::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void IntakeStop::Interrupted() {

}
