#ifndef SetLauncherAngle_H
#define SetLauncherAngle_H


#include "Commands/Subsystem.h"
#include "../Robot.h"

class SetLauncherAngle : public Command {
public:
	SetLauncherAngle();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // SetLauncherAngle_H
