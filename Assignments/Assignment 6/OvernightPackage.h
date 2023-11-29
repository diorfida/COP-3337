#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "Package.h"

class OvernightPackage : public Package
{
    private:
        double fee; // an overnight fee per ounce

    public:
        // constructor
        OvernightPackage(const std::string & name, const std::string & address, const std::string & city, const std::string & state, int ZIP, double w, double cost, double fee);

        // mutator method
        void setOvernightFeePerOunce(double fee);

        // redefinition of the caluclate cost method
        double calculateCost() const;

        // redefinition of the print method
        void printPackageInfo() const;
};

#endif