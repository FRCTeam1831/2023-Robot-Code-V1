#include <iostream>

#include "subsystems/LifterExtender.h"

LifterExtenderSubsystem::LifterExtenderSubsystem()

{
       double kP = .5, kI = 0, kD = 0, kIz = 0, kFF = 0, kMaxOutput = 1, kMinOutput = -1;
    // kP is the only factor that needs to be adjusted.

    LifterMotor.SetInverted(false);
    ExtendMotor.SetInverted(false);
    LifterMotor.SetIdleMode(rev::CANSparkMax::IdleMode::kBrake);
    ExtendMotor.SetIdleMode(rev::CANSparkMax::IdleMode::kBrake);
}