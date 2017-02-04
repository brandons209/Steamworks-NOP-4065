#ifndef IntakeAndWinch_H
#define IntakeAndWinch_H

#include <Commands/Subsystem.h>
#include "WPILib.h"
#include <CANTalon.h>

class IntakeAndWinch : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	std::shared_ptr<CANTalon> intakeMotor;
	std::shared_ptr<CANTalon> winchMotor;

public:
	IntakeAndWinch();
	void runIntake();
	void runWinch();
	void stop();

	void InitDefaultCommand();
};

#endif  // IntakeAndWinch_H
