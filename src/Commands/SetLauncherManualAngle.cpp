#include "SetLauncherManualAngle.h"

SetLauncherManualAngle::SetLauncherManualAngle() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void SetLauncherManualAngle::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void SetLauncherManualAngle::Execute() {
	Robot::launcher.get()->moveToManualAngle();
}

// Make this return true when this Command no longer needs to run execute()
bool SetLauncherManualAngle::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void SetLauncherManualAngle::End() {
	Robot::launcher.get()->angleChanger->Set(0.0);
	Robot::launcher.get()->I = 0;
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetLauncherManualAngle::Interrupted() {
	End();
}
