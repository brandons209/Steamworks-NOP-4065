// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.



#include "DriveToPosition.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

DriveToPosition::DriveToPosition() {
	double degreeConversion = 180/M_PI;

	double targetX = SmartDashboard::PutNumber("Drive to point x:", 0);
	double targetY = SmartDashboard::PutNumber("Drive to point y:", 0);

	double currentX = Robot::driveTrain.get()->realX;
	double currentY = Robot::driveTrain.get()->realY;

	double targetAngle;

	if(targetX - currentX < 0){
		targetAngle = 180 + (atan( (currentY - targetY) / (currentX - targetX ) ) * degreeConversion);
	}else{
		targetAngle = (atan( (currentY - targetY) / (currentX - targetX ) ) * degreeConversion);
	}

	SmartDashboard::PutNumber("Desired Angle To Rotate", targetAngle);

	AddSequential(new Rotate());
	AddSequential(new DriveForward());


     // Add Commands here:
    // e.g. AddSequential(new Command1());
    //      AddSequential(new Command2());
    // these will run in order.

    // To run multiple commands at the same time,
    // use AddParallel()
    // e.g. AddParallel(new Command1());
    //      AddSequential(new Command2());
    // Command1 and Command2 will run in parallel.

    // A command group will require all of the subsystems that each member
    // would require.
    // e.g. if Command1 requires chassis, and Command2 requires arm,
    // a CommandGroup containing them would require both the chassis and the
    // arm.
              // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=COMMAND_DECLARATIONS
                      // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=COMMAND_DECLARATIONS
 }
