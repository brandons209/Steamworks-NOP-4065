#ifndef Intake_H
#define Intake_H

#include "Commands/Subsystem.h"
#include "../../Robot.h"

class Intake : public Command {
public:
	Intake();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // Intake_H
