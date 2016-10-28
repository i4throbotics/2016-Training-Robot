#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"

std::shared_ptr<CANTalon> RobotMap::chassisFrontLeft;
std::shared_ptr<CANTalon> RobotMap::chassisFrontRight;
std::shared_ptr<CANTalon> RobotMap::chassisBackLeft;
std::shared_ptr<CANTalon> RobotMap::chassisBackRight;
std::shared_ptr<RobotDrive> RobotMap::chassisRobotDrive;

std::shared_ptr<SpeedController> RobotMap::liftingMechHighLifty;
std::shared_ptr<SpeedController> RobotMap::liftingMechLowLifty;

std::shared_ptr<CANTalon> RobotMap::intakeWheels;
std::shared_ptr<SpeedController> RobotMap::intakeLift;

std::shared_ptr<Encoder> RobotMap::chassisFrontLeftEncoder;
std::shared_ptr<Encoder> RobotMap::chassisFrontRightEncoder;
std::shared_ptr<Encoder> RobotMap::chassisBackLeftEncoder;
std::shared_ptr<Encoder> RobotMap::chassisBackRightEncoder;
std::shared_ptr<Encoder> RobotMap::intakeLiftEncoder;


void RobotMap::init() {
    LiveWindow *lw = LiveWindow::GetInstance();

    chassisFrontLeft.reset(new CANTalon(3));
    lw->AddActuator("Chassis", "FrontLeft", chassisFrontLeft);
    
    chassisBackRight.reset(new CANTalon(2));
    lw->AddActuator("Chassis", "FrontRight", chassisFrontRight);
    
    chassisBackLeft.reset(new CANTalon(4));
    lw->AddActuator("Chassis", "BackLeft", chassisBackLeft);
    
    chassisFrontRight.reset(new CANTalon(1));
    lw->AddActuator("Chassis", "BackRight", chassisBackRight);
    
    chassisRobotDrive.reset(new RobotDrive(chassisFrontLeft, chassisBackLeft,
              chassisFrontRight, chassisBackRight));
    
    chassisRobotDrive->SetSafetyEnabled(true);
        chassisRobotDrive->SetExpiration(0.1);
        chassisRobotDrive->SetSensitivity(0.5);
        chassisRobotDrive->SetMaxOutput(1.0);


    liftingMechHighLifty.reset(new VictorSP(0));
    liftingMechLowLifty.reset(new VictorSP(1));
    
   intakeWheels .reset(new CANTalon(5));

    intakeLift.reset(new VictorSP(2));

    chassisFrontRightEncoder.reset(new Encoder(0,1, false, Encoder::k4X));
    lw->AddSensor("Chassis", "FrontRightEncoder", std::static_pointer_cast<Encoder>(chassisFrontRightEncoder));
    chassisBackRightEncoder.reset(new Encoder(2,3, false, Encoder::k4X));
    lw->AddSensor("Chassis", "BackRightEncoder", std::static_pointer_cast<Encoder>(chassisBackRightEncoder));
    chassisFrontLeftEncoder.reset(new Encoder(4,5, true, Encoder::k4X));
    lw->AddSensor("Chassis", "FrontLeftEncoder", std::static_pointer_cast<Encoder>(chassisFrontLeftEncoder));

    chassisBackLeftEncoder.reset(new Encoder(6,7, true, Encoder::k4X));
    lw->AddSensor("Chassis", "BackLeftEncoder", std::static_pointer_cast<Encoder>(chassisBackLeftEncoder));
    intakeLiftEncoder.reset(new Encoder(8,9, false, Encoder::k4X));
    lw->AddSensor("Intake", "intakeLiftEncoder", std::static_pointer_cast<Encoder>(intakeLiftEncoder));

}
