#include "DriveForwardGearClosestOne.h"

DriveForwardGearClosestOne::DriveForwardGearClosestOne() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::driveTrain.get());
}

// Called just before this Command runs the first time
void DriveForwardGearClosestOne::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void DriveForwardGearClosestOne::Execute() {
	Robot::driveTrain.get()->driveToPoint(Robot::driveTrain.get()->realX, Robot::driveTrain.get()->realY + (105.0 - Robot::yOffset));
}

// Make this return true when this Command no longer needs to run execute()
bool DriveForwardGearClosestOne::IsFinished() {
	return Robot::driveTrain.get()->isFinished;
}

// Called once after isFinished returns true
void DriveForwardGearClosestOne::End() {
	Robot::driveTrain.get()->isFinished = false;
	Robot::driveTrain.get()->stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveForwardGearClosestOne::Interrupted() {
	End();
}
