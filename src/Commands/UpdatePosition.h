#ifndef UpdatePosition_H
#define UpdatePosition_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class UpdatePosition : public Command {
public:
	UpdatePosition();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // UpdatePosition_H
