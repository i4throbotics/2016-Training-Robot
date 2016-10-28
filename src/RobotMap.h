#ifndef ROBOTMAP_H
#define ROBOTMAP_H

#define LOWBAR 0
#define PORTCULLIS 1
#define CHEVALDEFRISE 2
#define DEADBOT 3

#define PORTCULLIS1 4
#define PORTCULLIS2 5
#define PORTCULLIS3 6
#define CHEVALDEFRISE1 7
#define CHEVALDEFRISE2 8
#define CHEVALDEFRISE3 9

#define RAMPARTS 10
#define ROUGH_TERRAIN 11

#include "WPILib.h"


/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
class RobotMap {
public:
	static std::shared_ptr<CANTalon> chassisFrontLeft;
	static std::shared_ptr<CANTalon> chassisFrontRight;
	static std::shared_ptr<CANTalon> chassisBackLeft;
	static std::shared_ptr<CANTalon> chassisBackRight;
	static std::shared_ptr<RobotDrive> chassisRobotDrive;
	static std::shared_ptr<SpeedController> liftingMechHighLifty;
	static std::shared_ptr<SpeedController> liftingMechLowLifty;
	static std::shared_ptr<SpeedController> intakeLift;
	static std::shared_ptr<CANTalon> intakeWheels;

	static std::shared_ptr<Encoder> chassisFrontLeftEncoder;
	static std::shared_ptr<Encoder> chassisFrontRightEncoder;
	static std::shared_ptr<Encoder> chassisBackLeftEncoder;
	static std::shared_ptr<Encoder> chassisBackRightEncoder;
	static std::shared_ptr<Encoder> intakeLiftEncoder;

	static void init();
};
#endif
