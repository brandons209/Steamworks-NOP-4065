#include "AutoCommandBuilder.h"

AutoCommandBuilder::AutoCommandBuilder() {

	if(Robot::autoChooser1.GetSelected() == "drive"){
		//SmartDashboard::PutNumber("Drive to point x:", Robot::driveTrain.get()->realX);
		//SmartDashboard::PutNumber("Drive to point y:", (Robot::driveTrain.get()->realY + (116.0 - Robot::yOffset)));
		AddSequential(new DriveForward());
	}else if(Robot::autoChooser1.GetSelected() == "g1" && Robot::autoChooser2.GetSelected() == "s1"){//gear and shoot

	}else if(Robot::autoChooser1.GetSelected() == "g2"){
		AddSequential(new DriveForwardGearMiddle());
	}else if(Robot::autoChooser1.GetSelected() == "g3"){//finish now

	}else if(Robot::autoChooser1.GetSelected() == "g1"){//gear boiler closest
		AddSequential(new DriveForwardGearClosestOne());
		AddSequential(new RotateClosest());
		AddSequential(new DriveForwardGearClosestTwo());

	}else if(Robot::autoChooser2.GetSelected() == "s1"){//shoot only
		AddSequential(new DriveForwardGearClosestOne());
		AddSequential(new Rotate());//need new rotate
		//AddSequential(new DriveForward(Robot::driveTrain.get()->realX - 100.0, Robot::driveTrain.get()->realY));
		Wait(1.0);
		//AddSequential(new DriveForward(Robot::driveTrain.get()->realX + 30.0, Robot::driveTrain.get()->realY));

		double degreeConversion = 180/M_PI;
		double targetAngle;
		double realX = Robot::driveTrain.get()->realX;
		double realY = Robot::driveTrain.get()->realY;

		if(0 - realX < 0){
			targetAngle = 180 + (atan( realY / realX ) * degreeConversion);
		}else{
			targetAngle = atan( realY / realX ) * degreeConversion;
		}
			//AddSequential(new Rotate(targetAngle));
			//AddParallel(new SetLauncherAngle());
			//AddSequential(new Launch());//calculating angle
			AddParallel(new SetLauncherManualAngle());
			AddSequential(new CalculatedLaunch());//calculating velocity

	}else if(Robot::autoChooser2.GetSelected() == "s2"){

	}else if(Robot::autoChooser2.GetSelected() == "s3"){

		//rotate
		//drive to hopper
		//turn and shoot
	}


}
