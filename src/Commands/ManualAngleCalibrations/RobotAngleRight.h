#ifndef RobotAngleRight_H
#define RobotAngleRight_H

#include "Commands/Subsystem.h"
#include "../../Robot.h"

class RobotAngleRight : public Command {
public:
	RobotAngleRight();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // RobotAngleRight_H
