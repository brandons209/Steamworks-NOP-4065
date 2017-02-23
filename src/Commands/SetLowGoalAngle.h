#ifndef SetLowGoalAngle_H
#define SetLowGoalAngle_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class SetLowGoalAngle : public Command {
public:
	SetLowGoalAngle();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // SetLowGoalAngle_H
