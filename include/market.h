#ifndef MARKET_H
#define MARKET_H

#include "Stock.h"
#include <vector>

using namespace std;

class Market {
private:
    vector<Stock> stocks;

public:
    void addStock(Stock stock);

    void displayMarket();

    Stock* findStock(string symbol);
};

#endif