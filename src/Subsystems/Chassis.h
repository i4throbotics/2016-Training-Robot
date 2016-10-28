#ifndef CHASSIS_H
#define CHASSIS_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

class Chassis: public Subsystem {
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	std::shared_ptr<CANTalon> frontLeft;
	std::shared_ptr<CANTalon> frontRight;
	std::shared_ptr<CANTalon> backLeft;
	std::shared_ptr<CANTalon> backRight;
	std::shared_ptr<RobotDrive> robotDrive;
	std::shared_ptr<Encoder> FLEncoder;
	std::shared_ptr<Encoder> BLEncoder;
	std::shared_ptr<Encoder> FREncoder;
	std::shared_ptr<Encoder> BREncoder;



public:
	Chassis();
	void InitDefaultCommand();
	//TODO add function declarations
	//eg. returntype FunctionName(parameters);
};

#endif
