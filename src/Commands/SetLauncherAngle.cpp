#include "SetLauncherAngle.h"

SetLauncherAngle::SetLauncherAngle() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void SetLauncherAngle::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void SetLauncherAngle::Execute() {
	Robot::launcher.get()->moveToAngle();
}

// Make this return true when this Command no longer needs to run execute()
bool SetLauncherAngle::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void SetLauncherAngle::End() {
	Robot::launcher.get()->angleChanger->Set(0.0);
	Robot::launcher.get()->I = 0;
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetLauncherAngle::Interrupted() {
	End();
}
