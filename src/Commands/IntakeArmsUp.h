#ifndef IntakeArmsUp_H
#define IntakeArmsUp_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class IntakeArmsUp: public Command
{
public:
	IntakeArmsUp();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
