#ifndef CalculatedLaunch_H
#define CalculatedLaunch_H


#include "Commands/Subsystem.h"
#include "../Robot.h"

class CalculatedLaunch : public Command {
public:
	CalculatedLaunch();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // CalculatedLaunch_H
