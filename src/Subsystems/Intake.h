#ifndef Intake_H
#define Intake_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Intake: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	std::shared_ptr<SpeedController> Lift;
	std::shared_ptr<CANTalon> Wheels;
	std::shared_ptr<Encoder> LiftEncoder;
	//TODO add private isBallHeld boolean
public:
	Intake();
	void InitDefaultCommand();

	//TODO add function declarations
	//eg. returntype FunctionName(parameters);
};

#endif
