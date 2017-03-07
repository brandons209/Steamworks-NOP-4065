#include "CalculatedLaunch.h"

CalculatedLaunch::CalculatedLaunch() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::launcher.get());
}

// Called just before this Command runs the first time
void CalculatedLaunch::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void CalculatedLaunch::Execute() {
	Robot::launcher.get()->calculatedLaunchFam();
	Robot::loader.get()->loadItDude();
}

// Make this return true when this Command no longer needs to run execute()
bool CalculatedLaunch::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void CalculatedLaunch::End() {
	Robot::launcher.get()->launcherMotor->Set(0);
	Robot::loader.get()->stop();
	Robot::launcher.get()->I2 = 0;
	Robot::loader.get()->i = 0;
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CalculatedLaunch::Interrupted() {
	End();
}
