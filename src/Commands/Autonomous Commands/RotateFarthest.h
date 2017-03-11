#ifndef RotateFarthest_H
#define RotateFarthest_H

#include "Commands/Subsystem.h"
#include "../../Robot.h"

class RotateFarthest : public Command {
public:
	RotateFarthest();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // RotateFarthest_H
