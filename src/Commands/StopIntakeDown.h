#ifndef StopIntakeDown_H
#define StopIntakeDown_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class StopIntakeDown: public Command
{
public:
	StopIntakeDown();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
