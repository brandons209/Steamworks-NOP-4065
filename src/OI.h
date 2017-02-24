// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef OI_H
#define OI_H

#include "WPILib.h"
#include "JoystickButtons/ToggledPressedButtonScheduler.h"
#include "JoystickButtons/JoystickAnalogButton.h"
#include "JoystickButtons/POVButton.h"

class OI {
private:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<Joystick> joystick;
	std::shared_ptr<JoystickButton> loadItFam;
	std::shared_ptr<JoystickButton> launchFam;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<JoystickButton> intakeBalls;
	std::shared_ptr<ToggledPressedButtonScheduler> intakeToggle;
	std::shared_ptr<JoystickButton> winchItUp;
	std::shared_ptr<JoystickAnalogButton> lowGoalLaunch;
	std::shared_ptr<JoystickAnalogButton> launch;
	std::shared_ptr<JoystickButton> togButton;
	std::shared_ptr<ToggledPressedButtonScheduler> toggleFrontandBack;
	std::shared_ptr<POVButton> launcherAngleUp;
	std::shared_ptr<POVButton> launcherAngleDown;
	std::shared_ptr<POVButton> robotAngleLeft;
	std::shared_ptr<POVButton> robotAngleRight;

public:
	OI();

	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES

	std::shared_ptr<Joystick> getJoystick();

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES
};

#endif
