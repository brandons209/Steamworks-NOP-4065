#include "Intake.h"

Intake::Intake() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::intakeAndWinch.get());
}

// Called just before this Command runs the first time
void Intake::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void Intake::Execute() {
	Robot::intakeAndWinch.get()->runWinch();
}

// Make this return true when this Command no longer needs to run execute()
bool Intake::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void Intake::End() {
	Robot::intakeAndWinch.get()->stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Intake::Interrupted() {
	End();
}
