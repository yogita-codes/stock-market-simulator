#include "../include/User.h"
#include <iostream>

using namespace std;

User::User(double initialCash) {
    cash = initialCash;
}

void User::buyStock(Market& market, string symbol, int quantity) {

    Stock* stock = market.findStock(symbol);

    if (stock == nullptr) {
        cout << "Stock not found.\n";
        return;
    }

    double totalCost = stock->getPrice() * quantity;

    if (totalCost > cash) {
        cout << "Insufficient balance.\n";
        return;
    }

    cash -= totalCost;

    portfolio.buyStock(
        symbol,
        quantity,
        stock->getPrice()
    );

    cout << "Successfully bought "
         << quantity << " shares of "
         << symbol << ".\n";
}

void User::sellStock(Market& market, string symbol, int quantity) {

    Stock* stock = market.findStock(symbol);

    if (stock == nullptr) {
        cout << "Stock not found.\n";
        return;
    }

    bool sold = portfolio.sellStock(symbol, quantity);

    if (!sold) {
        cout << "You don't own enough shares.\n";
        return;
    }

    double totalValue = stock->getPrice() * quantity;

    cash += totalValue;

    cout << "Successfully sold "
         << quantity << " shares of "
         << symbol << ".\n";
}

void User::showBalance() {

    cout << "\nCash Balance: Rs. "
         << cash << endl;
}

void User::showPortfolio() {

    portfolio.displayPortfolio();
}