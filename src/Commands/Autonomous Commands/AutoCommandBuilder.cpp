#include "AutoCommandBuilder.h"

AutoCommandBuilder::AutoCommandBuilder() {

	if(Robot::autoChooser1.GetSelected() == "drive"){
		SmartDashboard::PutNumber("Drive to point x:", Robot::driveTrain.get()->realX);
		SmartDashboard::PutNumber("Drive to point y:", Robot::driveTrain.get()->realY + (116.0 - Robot::yOffset));
		AddSequential(new DriveForward());
	}




}
