#ifndef BlenderForward_H
#define BlenderForward_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class BlenderForward : public Command {
public:
	BlenderForward();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // BlenderForward_H
