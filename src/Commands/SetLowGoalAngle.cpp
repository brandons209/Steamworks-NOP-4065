#include "SetLowGoalAngle.h"

SetLowGoalAngle::SetLowGoalAngle() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	//Requires(Robot::launcher.get());
}

// Called just before this Command runs the first time
void SetLowGoalAngle::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void SetLowGoalAngle::Execute() {
	Robot::launcher.get()->lowGoalMoveAngle();
}

// Make this return true when this Command no longer needs to run execute()
bool SetLowGoalAngle::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void SetLowGoalAngle::End() {
	Robot::launcher.get()->angleChanger->Set(0.0);
	Robot::launcher.get()->I = 0;
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetLowGoalAngle::Interrupted() {
	End();
}
