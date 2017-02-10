#ifndef LauncherAngleUp_H
#define LauncherAngleUp_H

#include "Commands/Subsystem.h"
#include "../../Robot.h"

class LauncherAngleUp : public Command {
public:
	LauncherAngleUp();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // LauncherAngleUp_H
