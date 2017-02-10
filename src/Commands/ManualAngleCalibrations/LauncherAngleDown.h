#ifndef LauncherAngleDown_H
#define LauncherAngleDown_H

#include "Commands/Subsystem.h"
#include "../../Robot.h"

class LauncherAngleDown : public Command {
public:
	LauncherAngleDown();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // LauncherAngleDown_H
