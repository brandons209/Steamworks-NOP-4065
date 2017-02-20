// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
#include "CANTalon.h"

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "WPILib.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<CANTalon> RobotMap::driveTrainleftFront;
std::shared_ptr<CANTalon> RobotMap::driveTrainrightFront;
std::shared_ptr<CANTalon> RobotMap::driveTrainleftBack;
std::shared_ptr<CANTalon> RobotMap::driveTrainrightBack;
std::shared_ptr<CANTalon> RobotMap::launcherlauncherMotor;
std::shared_ptr<CANTalon> RobotMap::launcherangleChanger;
//std::shared_ptr<AnalogPotentiometer> RobotMap::launcheranglePot;
std::shared_ptr<Encoder> RobotMap::launcherangleEncoder;
std::shared_ptr<Encoder> RobotMap::launcherlauncherEncoder;
std::shared_ptr<CANTalon> RobotMap::loaderLimitWheel;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<AHRS> RobotMap::driveTrainahrs;
std::shared_ptr<CANTalon> RobotMap::intakeAndWinchintakeMotor;
std::shared_ptr<CANTalon> RobotMap::intakeAndWinchwinchMotor;

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    LiveWindow *lw = LiveWindow::GetInstance();

    driveTrainleftFront.reset(new CANTalon(4));
    lw->AddActuator("DriveTrain", "leftFront", driveTrainleftFront);
    
    driveTrainrightFront.reset(new CANTalon(5));
    lw->AddActuator("DriveTrain", "rightFront", driveTrainrightFront);
    
    driveTrainleftBack.reset(new CANTalon(2));
    lw->AddActuator("DriveTrain", "leftBack", driveTrainleftBack);
    
    driveTrainrightBack.reset(new CANTalon(3));
    lw->AddActuator("DriveTrain", "rightBack", driveTrainrightBack);
    
    launcherlauncherMotor.reset(new CANTalon(6));
    lw->AddActuator("Launcher", "launcherMotor", launcherlauncherMotor);
    
    launcherangleChanger.reset(new CANTalon(1));
    lw->AddActuator("Launcher", "angleChanger", launcherangleChanger);
    
    //launcheranglePot.reset(new AnalogPotentiometer(0, 360.0, 0.0));
    //lw->AddSensor("Launcher", "anglePot", launcheranglePot);
    launcherangleEncoder.reset(new Encoder(0, 1, false, Encoder::k4X));
    lw->AddSensor("Launcher", "angleEncoder", launcherangleEncoder);
    launcherangleEncoder.get()->SetDistancePerPulse(0.7);//change when testing
    launcherangleEncoder.get()->SetPIDSourceType(PIDSourceType::kDisplacement);

    launcherlauncherEncoder.reset(new Encoder(2, 3, true, Encoder::k4X));
    lw->AddSensor("Launcher", "launcherEncoder", launcherlauncherEncoder);
    launcherlauncherEncoder.get()->SetDistancePerPulse(RobotMap::flywheelCircumference / 1440);
    //launcherlauncherEncoder.get()->SetDistancePerPulse(144.0);
    launcherlauncherEncoder.get()->SetPIDSourceType(PIDSourceType::kRate);
    
    loaderLimitWheel.reset(new CANTalon(8));
    lw->AddActuator("Loader", "limitWheel", loaderLimitWheel);

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS

    driveTrainahrs.reset(new AHRS(SPI::Port::kMXP));
    launcherlauncherMotor.get()->ConfigNeutralMode(CANSpeedController::NeutralMode::kNeutralMode_Coast);

    intakeAndWinchintakeMotor.reset(new CANTalon(10));
    lw->AddActuator("Intake", "intakeMotor", intakeAndWinchintakeMotor);

    intakeAndWinchwinchMotor.reset(new CANTalon(9));
    lw->AddActuator("Intake", "winchMotor", intakeAndWinchwinchMotor);

}
