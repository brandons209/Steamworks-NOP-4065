#include "Winch.h"

Winch::Winch() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::intakeAndWinch.get());
}

// Called just before this Command runs the first time
void Winch::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void Winch::Execute() {
	Robot::intakeAndWinch.get()->runWinch();
}

// Make this return true when this Command no longer needs to run execute()
bool Winch::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void Winch::End() {
	Robot::intakeAndWinch.get()->stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Winch::Interrupted() {
	End();
}
