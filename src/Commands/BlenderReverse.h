#ifndef BlenderReverse_H
#define BlenderReverse_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class BlenderReverse : public Command {
public:
	BlenderReverse();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // BlenderReverse_H
