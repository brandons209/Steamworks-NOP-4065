#ifndef Winch_H
#define Winch_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class Winch : public Command {
public:
	Winch();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // Winch_H
