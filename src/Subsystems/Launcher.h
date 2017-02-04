// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef LAUNCHER_H
#define LAUNCHER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include <CANTalon.h>
#include "Vision.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class Launcher: public Subsystem {
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS


	//std::shared_ptr<AnalogPotentiometer> anglePot;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
public:
	std::shared_ptr<Encoder> angleEncoder;
	std::shared_ptr<Encoder> launcherEncoder;
	std::shared_ptr<CANTalon> launcherMotor;
	Launcher();
	void InitDefaultCommand();
	void calculateAngle();
	void launchFam(double);
	void moveToAngle();
	double desiredAngle;
	double currentAngle;
	double shortVelocity, longVelocity;
	double I, I2;
	std::shared_ptr<CANTalon> angleChanger;

	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
};

#endif
