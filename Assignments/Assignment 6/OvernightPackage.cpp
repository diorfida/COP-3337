#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(const std::string & name, const std::string & address, const std::string & city, const std::string & state, int ZIP, double w, double cost, double fee)
: Package(name, address, city, state, ZIP, w, cost) // use the correct constructor with the inputs necessary
{
    this->fee = fee; // assign the fee
}

void OvernightPackage::setOvernightFeePerOunce(double fee)
{
    this->fee = fee; // assign the fee
}

double OvernightPackage::calculateCost() const
{
    return (cost + fee) * weight; // takes into account the weight with the fee
}

void OvernightPackage::printPackageInfo() const
{
    // same print function with a different package type
    std::cout << "------------------------------" << std::endl;
    std::cout << "Overnight Package id " << ID << ":" << std::endl << std::endl;
    std::cout << name << std::endl;
    std::cout << address << std::endl;
    std::cout << city << ", " << state << " " << ZIP << std::endl << std::endl;
    std::cout << "Cost: $" << calculateCost() << std::endl;
    std::cout << "------------------------------" << std::endl;
}