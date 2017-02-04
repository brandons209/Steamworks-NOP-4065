#include "IntakeAndWinch.h"
#include "../RobotMap.h"

IntakeAndWinch::IntakeAndWinch() : Subsystem("IntakeAndWinch") {
	intakeMotor = RobotMap::intakeAndWinchintakeMotor;
	winchMotor = RobotMap::intakeAndWinchwinchMotor;
}

void IntakeAndWinch::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

void IntakeAndWinch::runIntake(){
	intakeMotor.get()->Set(-0.5);
}

void IntakeAndWinch::runWinch(){
	winchMotor.get()->Set(0.7);
}

void IntakeAndWinch::stop(){
	intakeMotor.get()->Set(0.0);
	winchMotor.get()->Set(0.0);
}

