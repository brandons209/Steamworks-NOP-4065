// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include <AHRS.h>

/**
 *
 *
 * @author ExampleAuthor
 */
class DriveTrain: public Subsystem {
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<CANTalon> leftFront;
	std::shared_ptr<CANTalon> rightFront;
	std::shared_ptr<CANTalon> leftBack;
	std::shared_ptr<CANTalon> rightBack;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<AHRS> ahrs;

	bool switched;

public:
	DriveTrain();
	void InitDefaultCommand();
	void tankDrive(std::shared_ptr<Joystick>);
	void rotate(double targetAngle);
	void updatePos();
	void driveForward();
	void driveToPoint(double, double);
	void switchFront(bool side);

	void stop();

	bool isFinished;
	double I;
	double realX, realY;

	double rawX, rawY;
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
};

#endif