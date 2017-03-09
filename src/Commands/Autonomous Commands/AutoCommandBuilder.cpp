#include "AutoCommandBuilder.h"

AutoCommandBuilder::AutoCommandBuilder() {

	if(Robot::autoChooser1.GetSelected() == "drive"){
		//SmartDashboard::PutNumber("Drive to point x:", Robot::driveTrain.get()->realX);
		//SmartDashboard::PutNumber("Drive to point y:", (Robot::driveTrain.get()->realY + (116.0 - Robot::yOffset)));
		AddSequential(new DriveForward(Robot::driveTrain.get()->realX, Robot::driveTrain.get()->realY + (116.0 - Robot::yOffset)));//need fix distance
	}else if(Robot::autoChooser1.GetSelected() == "g1"){

	}else if(Robot::autoChooser1.GetSelected() == "g2"){
		AddSequential(new DriveForward(Robot::driveTrain.get()->realX, Robot::driveTrain.get()->realY + (90.0 - Robot::yOffset)));//need fix distance
	}else if(Robot::autoChooser1.GetSelected() == "g3"){

	}

	if(Robot::autoChooser2.GetSelected() == "s1"){

	}else if(Robot::autoChooser2.GetSelected() == "s2"){

	}else if(Robot::autoChooser2.GetSelected() == "s3"){
		//do some codes here use solidworks model
		//rotate
		//drive to hopper
		//turn and shoot
	}


}
