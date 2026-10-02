#include "../include/Portfolio.h"
#include <iostream>

using namespace std;

void Portfolio::buyStock(string symbol, int quantity, double buyPrice) {

    Holding newHolding;

    newHolding.symbol = symbol;
    newHolding.quantity = quantity;
    newHolding.buyPrice = buyPrice;

    holdings.push_back(newHolding);
}

bool Portfolio::sellStock(string symbol, int quantity) {

    for (int i = 0; i < holdings.size(); i++) {

        if (holdings[i].symbol == symbol) {

            if (holdings[i].quantity >= quantity) {

                holdings[i].quantity -= quantity;

                if (holdings[i].quantity == 0) {
                    holdings.erase(holdings.begin() + i);
                }

                return true;
            }
        }
    }

    return false;
}

void Portfolio::displayPortfolio() {

    cout << "\n===== PORTFOLIO =====\n";

    if (holdings.empty()) {
        cout << "Portfolio is empty.\n";
        return;
    }

    for (Holding holding : holdings) {

        cout << holding.symbol
             << " | Quantity: " << holding.quantity
             << " | Buy Price: Rs. " << holding.buyPrice
             << endl;
    }
}