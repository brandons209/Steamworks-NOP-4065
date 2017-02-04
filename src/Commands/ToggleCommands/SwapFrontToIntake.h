#ifndef SwapFrontToIntake_H
#define SwapFrontToIntake_H

#include "Commands/Subsystem.h"
#include "../../Robot.h"

class SwapFrontToIntake : public Command {
public:
	SwapFrontToIntake();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // SwapFrontToIntake_H
