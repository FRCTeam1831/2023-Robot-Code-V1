#include "RobotContainer.h"

#include <utility>
#include <iostream>
#include <frc/controller/PIDController.h>
#include <frc/geometry/Translation2d.h>
#include <frc/shuffleboard/Shuffleboard.h>
#include <frc/trajectory/Trajectory.h>
#include <frc/trajectory/TrajectoryGenerator.h>
#include <frc/trajectory/constraint/MecanumDriveKinematicsConstraint.h>
#include <frc2/command/InstantCommand.h>
#include <frc2/command/MecanumControllerCommand.h>
#include <frc2/command/SequentialCommandGroup.h>
#include <frc2/command/button/JoystickButton.h>
#include <units/velocity.h>
#include <units/voltage.h>
#include <numbers>

#include "Constants.h"

//RobotContainer::RobotContainer() : m_autonomousCommand(&m_subsystem) {

  //ConfigureButtonBindings();

//}

void RobotContainer::ConfigureButtonBindings() {
   frc2::JoystickButton(&m_driverController, frc::XboxController::Button::kLeftBumper)
     .WhenPressed(&m_liftextendExtendFWD)
     .WhenReleased(&m_liftextendExtendSTP);
}