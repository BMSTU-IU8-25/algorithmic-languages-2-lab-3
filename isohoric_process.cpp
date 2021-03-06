#include "isohoric_process.h"

IsohoricProcess::IsohoricProcess(double const nu, double const v, double const deltaP) : ThermodynamicProcess(nu), v_(v), deltaP_(deltaP) {}

long double IsohoricProcess::getDeltaP() const {
    return deltaP_;
}

long double IsohoricProcess::getDeltaV() const {
    return 0;
}

long double IsohoricProcess::getDeltaT() const {
    return deltaP_ * v_ / (nu_ * R);
}

long double IsohoricProcess::getA() const {
    return 0;
}

std::string IsohoricProcess::toString() const {
    return "IsohoricProcess{nu = " + std::to_string(nu_) + ", V = " + std::to_string(v_) + ", deltaP = " + std::to_string(deltaP_) + ", deltaT = " + std::to_string(getDeltaT()) + '}';
}
