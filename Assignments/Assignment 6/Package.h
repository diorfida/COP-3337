#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
#include <string>

class Package
{
    protected: // data types to be used by all inherited classes
        std::string name, address, city, state;
        int ZIP;
        double weight, cost;
        static int ID;

    public:
        // constructor
        Package(const std::string & name, const std::string & address, const std::string & city, const std::string & state, int ZIP, double weight, double cost);

        // mutator methods for the weight and cost per ounce
        void setWeight(int weight);
        void setCostPerOunce(int cost);

        // calculates the cost of shipping
        virtual double calculateCost() const;

        // prints package info in a legible format
        virtual void printPackageInfo() const;
};

#endif