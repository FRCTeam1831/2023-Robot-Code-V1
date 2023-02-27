#include <frc2/command/SubsystemBase.h>
#include <rev/CANSparkMax.h>
#include <frc/DigitalInput.h>
#include "Constants.h"
//#include <ctre/Phoenix.h>
// #include <frc/motorcontrol/PWMTalonSRX.h>
class GripperSubsystem  : public frc2::SubsystemBase {

public:
    GripperSubsystem();
    void WristStart();
    void GrabberStart();
    void WristStop();
    void GrabberStop();

    double GetWristPosition();
    double GetGripperPosition();
private:
    rev::CANSparkMax WristMotor{CANBusIds::WRIST,rev::CANSparkMaxLowLevel::MotorType::kBrushless};
    rev::CANSparkMax GrabberMotor{CANBusIds::GRABBER,rev::CANSparkMaxLowLevel::MotorType::kBrushless};

    rev::SparkMaxPIDController WristPIDCtlr = WristMotor.GetPIDController();
   rev::SparkMaxPIDController GrabberPIDCtlr = GrabberMotor.GetPIDController();

   rev::SparkMaxRelativeEncoder WristEncdr = WristMotor.GetEncoder(rev::CANEncoder::EncoderType::kHallSensor, 42);
   rev::SparkMaxRelativeEncoder GrabberEncdr = GrabberMotor.GetEncoder(rev::CANEncoder::EncoderType::kHallSensor, 42);

//void SetClimberPosition(double rotations); 
};