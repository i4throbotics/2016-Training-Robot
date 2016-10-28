#ifndef IntakeWheelsOut_H
#define IntakeWheelsOut_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class IntakeWheelsOut: public Command
{
public:
	IntakeWheelsOut();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
