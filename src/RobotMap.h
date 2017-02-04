// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef ROBOTMAP_H
#define ROBOTMAP_H

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "WPILib.h"
#include "CANTalon.h"

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include <AHRS.h>
#include <LiveWindow/LiveWindow.h>

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
class RobotMap {
public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static std::shared_ptr<CANTalon> driveTrainleftFront;
	static std::shared_ptr<CANTalon> driveTrainrightFront;
	static std::shared_ptr<CANTalon> driveTrainleftBack;
	static std::shared_ptr<CANTalon> driveTrainrightBack;
	static std::shared_ptr<CANTalon> launcherlauncherMotor;
	static std::shared_ptr<CANTalon> launcherangleChanger;
	//static std::shared_ptr<AnalogPotentiometer> launcheranglePot;
	static std::shared_ptr<Encoder> launcherangleEncoder;
	static std::shared_ptr<Encoder> launcherlauncherEncoder;
	static std::shared_ptr<CANTalon> loaderloadIt;
	static std::shared_ptr<CANTalon> loaderLimitWheel;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static std::shared_ptr<CANTalon> intakeAndWinchintakeMotor;
	static std::shared_ptr<CANTalon> intakeAndWinchwinchMotor;
	static std::shared_ptr<AHRS> driveTrainahrs;

	static constexpr double kP = 0.02;
	static constexpr double kI = 0.000000000000001;
	static constexpr double flywheelCircumference = 6*M_PI;

	static constexpr double cameraVeritalViewAngle = 33.3;
	static constexpr double cameraHorizontalViewAngle = 60.0;
	static constexpr double cameraFocalLength = 699.89189;

	static constexpr double topTapeTowerHeight = 88.0;
	static constexpr double topTapeHeight = 4.0;//all in inches
	static constexpr double tapeWidth = 15.0;

	static constexpr double testTargetHeight = 24.0;
	static constexpr double testTargetWidth = 13 + (7/8);

	static constexpr double bottomTapeTowerHeight = 80;
	static constexpr double bottomTapeHeight = 2;

	static constexpr double distanceOmniWheelCircumference = 4 * M_PI;

	static void init();


};
#endif