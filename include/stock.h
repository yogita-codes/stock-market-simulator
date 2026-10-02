#ifndef STOCK_H
#define STOCK_H

#include <string>
using namespace std;

class Stock {
private:
    string symbol;
    string companyName;
    double price;

public:
    Stock(string symbol, string companyName, double price);

    string getSymbol() const;
    string getCompanyName() const;
    double getPrice() const;

    void updatePrice(double newPrice);
};

#endif