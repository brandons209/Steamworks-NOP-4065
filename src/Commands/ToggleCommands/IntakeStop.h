#ifndef IntakeStop_H
#define IntakeStop_H

#include "Commands/Subsystem.h"
#include "../../Robot.h"

class IntakeStop : public Command {
public:
	IntakeStop();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // IntakeStop_H
