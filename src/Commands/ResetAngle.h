#ifndef ResetAngle_H
#define ResetAngle_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class ResetAngle : public Command {
public:
	ResetAngle();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // ResetAngle_H
