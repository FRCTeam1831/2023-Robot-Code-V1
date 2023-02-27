#pragma once

#include <frc/XboxController.h>
#include <frc/controller/PIDController.h>
#include <frc/controller/ProfiledPIDController.h>
#include <frc/smartdashboard/SendableChooser.h>
#include <frc/filter/SlewRateLimiter.h>
#include <frc2/command/Command.h>
#include <frc2/command/InstantCommand.h>
#include <frc2/command/PIDCommand.h>
#include <frc2/command/ParallelRaceGroup.h>
#include <frc2/command/RunCommand.h>
#include <units/velocity.h>
#include <units/voltage.h>
#include "Constants.h"
#include "subsystems/LifterExtender.h"
#include "subsystems/Gripper.h"


class RobotContainer {
 public:
  RobotContainer();
frc2::Command* GetAutonomousCommand();
LifterExtenderSubsystem m_liftextend{};
GripperSubsystem m_gripper{};


frc::XboxController m_driverController{OIConstants::kDriverControllerPort};



;
private:

frc::TrapezoidProfile<units::radians>::Constraints kThetaControllerConstraints;

 frc2::InstantCommand m_liftextendExtendSTP{[this] { m_liftextend.ExtendSTP(); }, {}};
 frc2::InstantCommand m_liftextendExtendFWD{[this] { m_liftextend.ExtendFWD(); }, {}};
 frc2::InstantCommand m_liftextendExtendREV{[this] { m_liftextend.ExtendREV(); }, {}};
  void ConfigureButtonBindings();
};