// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "Rotate.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

Rotate::Rotate(double tAngle): Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(Robot::chassis.get());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::driveTrain.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	targetAngle = tAngle;
}

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void Rotate::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void Rotate::Execute() {
	Robot::driveTrain.get()->rotate(targetAngle);
}

// Make this return true when this Command no longer needs to run execute()
bool Rotate::IsFinished() {
    return Robot::driveTrain.get()->isFinished;
}

// Called once after isFinished returns true
void Rotate::End() {
	Robot::driveTrain.get()->isFinished = false;
	Robot::driveTrain.get()->I = 0;
	Robot::driveTrain.get()->stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Rotate::Interrupted() {
	End();
}
