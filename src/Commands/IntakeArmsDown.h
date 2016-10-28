#ifndef IntakeArmsDown_H
#define IntakeArmsDown_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class IntakeArmsDown: public Command
{
private:
	//TODO: add private variables for method 2
public:
	IntakeArmsDown();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
