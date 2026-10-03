#ifndef PORTFOLIO_H
#define PORTFOLIO_H

#include <string>
#include <vector>

using namespace std;

struct Holding {
    string symbol;
    int quantity;
    double buyPrice;
};

class Portfolio {
private:
    vector<Holding> holdings;

public:
    void buyStock(string symbol, int quantity, double buyPrice);
    bool sellStock(string symbol, int quantity);

    void displayPortfolio();
};

#endif