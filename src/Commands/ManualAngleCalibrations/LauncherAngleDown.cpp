#include "LauncherAngleDown.h"

LauncherAngleDown::LauncherAngleDown() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void LauncherAngleDown::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void LauncherAngleDown::Execute() {
	Robot::launcher.get()->reduceAngle();
}

// Make this return true when this Command no longer needs to run execute()
bool LauncherAngleDown::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void LauncherAngleDown::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LauncherAngleDown::Interrupted() {

}
