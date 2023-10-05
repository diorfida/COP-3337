#include <iostream>
#include <string>
#include <cmath>

using std::string;

// Stock class
class Stock
{
    private:
        string symbol; // stock symbol
        string name; // stock name
        double previousClosingPrice; // the previous closing price of the stock
        double currentPrice; // the current price of the stock

    public:
        // constructor to assign the name and symbol of the stock
        Stock(string symbol, string name)
        {
            this->symbol = symbol;
            this->name = name;
        }

        // accessor method for the symbol
        string getSymbol() const
        {
            return symbol;
        }
        
        // accessor method for the name
        string getName() const
        {
            return name;
        }

        // accessor method for the previous closing price
        double getPreviousClosingPrice() const
        {
            return previousClosingPrice;
        }

        // accessor method for the current stock price
        double getCurrentPrice() const
        {
            return currentPrice;
        }

        // mutator method for the previous closing price
        void setPreviousClosingPrice(double _previousClosingPrice)
        {
            previousClosingPrice = _previousClosingPrice;
        }

        // mutator method for the current stock price
        void setCurrentPrice(double _currentPrice)
        {
            currentPrice = _currentPrice;
        }

        // calculates the percent that the stock price has changed
        double getChangePercent() const
        {
            return (currentPrice - previousClosingPrice) / previousClosingPrice;
        }
};

// main function tests the class constructor and methods
int main()
{
    Stock s1("NVDA", "NVIDIA Corp.");

    s1.setPreviousClosingPrice(27.5);
    s1.setCurrentPrice(27.6);

    std::cout << "Previous Closing Price: " << s1.getPreviousClosingPrice() << std::endl;
    std::cout << "Current Price: " << s1.getCurrentPrice() << std::endl;
    std::cout << "Percent Change: " << s1.getChangePercent() << std::endl;

    return 0;
}