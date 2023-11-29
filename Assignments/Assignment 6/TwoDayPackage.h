#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include "Package.h"

class TwoDayPackage : public Package
{
    private:
        double fee; // just a flat fee

    public:
        // constructor
        TwoDayPackage(const std::string & name, const std::string & address, const std::string & city, const std::string & state, int ZIP, double w, double cost, double fee);

        // mutator method for the flat fee
        void setFlatFee(double fee);

        // redefinition of the caluclate cost method
        double calculateCost() const;

        // redefinition of the print method
        void printPackageInfo() const;
};

#endif