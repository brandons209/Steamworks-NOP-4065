#include "LauncherAngleUp.h"

LauncherAngleUp::LauncherAngleUp() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void LauncherAngleUp::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void LauncherAngleUp::Execute() {
	Robot::launcher.get()->increaseAngle();
}

// Make this return true when this Command no longer needs to run execute()
bool LauncherAngleUp::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void LauncherAngleUp::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LauncherAngleUp::Interrupted() {

}
