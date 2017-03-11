#include "DriveForwardGearFarthestTwo.h"

DriveForwardGearFarthestTwo::DriveForwardGearFarthestTwo() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::driveTrain.get());
}

// Called just before this Command runs the first time
void DriveForwardGearFarthestTwo::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void DriveForwardGearFarthestTwo::Execute() {
	Robot::driveTrain.get()->driveToPoint(118.47 - 10, 212.87 - 10);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveForwardGearFarthestTwo::IsFinished() {
	return Robot::driveTrain.get()->isFinished;
}

// Called once after isFinished returns true
void DriveForwardGearFarthestTwo::End() {
	Robot::driveTrain.get()->isFinished = false;
	Robot::driveTrain.get()->stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveForwardGearFarthestTwo::Interrupted() {
	End();
}
