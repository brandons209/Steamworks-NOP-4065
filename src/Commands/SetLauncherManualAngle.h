#ifndef SetLauncherManualAngle_H
#define SetLauncherManualAngle_H


#include "Commands/Subsystem.h"
#include "../Robot.h"

class SetLauncherManualAngle : public Command {
public:
	SetLauncherManualAngle();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // SetLauncherManualAngle_H
