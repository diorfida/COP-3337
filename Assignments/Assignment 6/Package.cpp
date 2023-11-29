#include "Package.h"

int Package::ID = 0;

Package::Package(const std::string & name, const std::string & address, const std::string & city, const std::string & state, int ZIP, double weight, double cost)
{
    // used the this pointer since the provided constructor heading had same variable names.
    this->name = name;
    this->address = address;
    this->city = city;
    this->state = state;
    this->ZIP = ZIP;
    this->weight = weight;
    this->cost = cost;
    ID++; // increment the ID number that we are on
}

void Package::setWeight(int weight)
{
    // ensure that the weight is a positive number
    if(weight >= 0)
        this->weight = weight;
    else
    {
        std::cout << "Weight is not in bounds. Setting the weight to zero." << std::endl;
        this->weight = 0;
    }
}

void Package::setCostPerOunce(int cost)
{
    // ensure that the cost is a positive number
    if(cost >= 0)
        this->cost = cost;
    else
    {
        std::cout << "Cost per ounce is not in bounds. Setting the cost per ounce to zero." << std::endl;
        this->cost = 0;
    }
}

double Package::calculateCost() const
{
    return weight * cost; // simple cost per ounce calculation
}

void Package::printPackageInfo() const
{
    // prints everything in legible format
    std::cout << "------------------------------" << std::endl;
    std::cout << "Package id " << ID << ":" << std::endl << std::endl;
    std::cout << name << std::endl;
    std::cout << address << std::endl;
    std::cout << city << ", " << state << " " << ZIP << std::endl << std::endl;
    std::cout << "Cost: $" << calculateCost() << std::endl;
    std::cout << "------------------------------" << std::endl;
}