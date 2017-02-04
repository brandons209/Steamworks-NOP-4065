#ifndef SwapFrontToGear_H
#define SwapFrontToGear_H

#include "Commands/Subsystem.h"
#include "../../Robot.h"

class SwapFrontToGear : public Command {
public:
	SwapFrontToGear();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // SwapFrontToGear_H
