#include "../include/Market.h"
#include <iostream>

using namespace std;

void Market::addStock(Stock stock) {

    stocks.push_back(stock);
}

void Market::displayMarket() {

    cout << "\n========== STOCK MARKET ==========\n";

    for (Stock stock : stocks) {

        cout << stock.getSymbol()
             << " | "
             << stock.getCompanyName()
             << " | Rs. "
             << stock.getPrice()
             << endl;
    }
}

Stock* Market::findStock(string symbol) {

    for (Stock& stock : stocks) {

        if (stock.getSymbol() == symbol) {
            return &stock;
        }
    }

    return nullptr;
}