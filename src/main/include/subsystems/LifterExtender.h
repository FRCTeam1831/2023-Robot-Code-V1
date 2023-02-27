#include <frc2/command/SubsystemBase.h>
#include <rev/CANSparkMax.h>
#include "Constants.h"

class LifterExtenderSubsystem  : public frc2::SubsystemBase {

public:
    LifterExtenderSubsystem();
    void ExtendFWD();
    void LiftUP();
    void ExtendSTP();
    void LiftSTP();
    void ExtendREV();
    void LiftDOWN();

    double GetLiftPosition();
    double GetExtendPosition();
private:
    rev::CANSparkMax ExtendMotor{CANBusIds::EXTENDER,rev::CANSparkMaxLowLevel::MotorType::kBrushless};
    rev::CANSparkMax LifterMotor{CANBusIds::LIFTER,rev::CANSparkMaxLowLevel::MotorType::kBrushless};

    rev::SparkMaxPIDController ExtendPIDCtlr = ExtendMotor.GetPIDController();
   rev::SparkMaxPIDController LiftPIDCtlr = LifterMotor.GetPIDController();

   rev::SparkMaxRelativeEncoder ExtendEncdr = ExtendMotor.GetEncoder(rev::CANEncoder::EncoderType::kHallSensor, 51);
   rev::SparkMaxRelativeEncoder LiftEncdr = LifterMotor.GetEncoder(rev::CANEncoder::EncoderType::kHallSensor, 52);

void SetExtenderPosition(double rotations); 
};