#include "CompleteLaunch.h"

CompleteLaunch::CompleteLaunch() {

		double degreeConversion = 180/M_PI;
		double targetAngle;
		double realX = SmartDashboard::GetNumber("Real X", 0);
		double realY = SmartDashboard::GetNumber("Real Y", 0);

		if(0 - realX < 0){
			targetAngle = 180 + (atan( realY / realX ) * degreeConversion);
		}else{
			targetAngle = atan( realY / realX ) * degreeConversion;
		}

	//AddSequential(new Rotate(targetAngle));
	//AddParallel(new SetLauncherAngle());
	AddParallel(new SetLauncherManualAngle());
	AddSequential(new Launch());//calculating angle
	//AddParallel(new SetLauncherManualAngle());
	//AddSequential(new CalculatedLaunch());//calculating velocity

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
