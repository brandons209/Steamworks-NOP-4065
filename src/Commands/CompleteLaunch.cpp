#include "CompleteLaunch.h"

CompleteLaunch::CompleteLaunch() {

	double degreeConversion = 180/M_PI;
	double currentX = Robot::driveTrain.get()->realX;
	double currentY = Robot::driveTrain.get()->realY;
	double targetAngle;

	if(0 - currentX < 0){
		targetAngle = 180 + (atan2( currentY, currentX ) * degreeConversion);
	}else{
		targetAngle = atan2( currentY, currentX ) * degreeConversion;
	}

	SmartDashboard::PutNumber("Desired Angle To Rotate", targetAngle);

	AddSequential(new Rotate());
	AddParallel(new SetLauncherAngle());
	AddSequential(new Launch());


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
}
