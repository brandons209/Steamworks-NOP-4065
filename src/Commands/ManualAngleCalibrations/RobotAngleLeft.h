#ifndef RobotAngleLeft_H
#define RobotAngleLeft_H

#include "Commands/Subsystem.h"
#include "../../Robot.h"

class RobotAngleLeft : public Command{
public:
	RobotAngleLeft();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // RobotAngleLeft_H
