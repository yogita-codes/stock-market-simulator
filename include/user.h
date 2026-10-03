#ifndef USER_H
#define USER_H

#include "Portfolio.h"
#include "Market.h"

class User {
private:
    double cash;
    Portfolio portfolio;

public:
    User(double initialCash);

    void buyStock(Market& market, string symbol, int quantity);
    void sellStock(Market& market, string symbol, int quantity);

    void showBalance();
    void showPortfolio();
};

#endif