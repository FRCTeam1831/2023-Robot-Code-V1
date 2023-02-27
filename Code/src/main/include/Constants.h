#include <numbers>

#include <frc/StateSpaceUtil.h>
#include <frc/geometry/Pose2d.h>


#include <frc/kinematics/MecanumDriveKinematics.h>
#include <frc/trajectory/TrapezoidProfile.h>
#include <units/acceleration.h>
#include <units/angle.h>
#include <units/angular_velocity.h>
#include <units/length.h>
#include <units/time.h>
#include <units/velocity.h>
#include <units/voltage.h>


#pragma once

namespace OIConstants {
    constexpr int kDriverControllerPort = 0;
}

namespace CANBusIds {
    constexpr int FRONT_LEFT_DRIVE = 11;
    constexpr int FRONT_LEFT_STEER = 12;
    constexpr int FRONT_LEFT_CANCODER = 13;
    constexpr int FRONT_RIGHT_DRIVE = 21;
    constexpr int FRONT_RIGHT_STEER = 22;
    constexpr int FRONT_RIGHT_CANCODER = 23;
    constexpr int REAR_RIGHT_DRIVE = 31;
    constexpr int REAR_RIGHT_STEER = 32;
    constexpr int REAR_RIGHT_CANCODER = 33;
    constexpr int REAR_LEFT_DRIVE = 41;
    constexpr int REAR_LEFT_STEER = 42;
    constexpr int REAR_LEFT_CANCODER = 43;
    constexpr int EXTENDER = 51;
    constexpr int LIFTER = 52;
    constexpr int WRIST = 53;
    constexpr int GRABBER = 54;
}