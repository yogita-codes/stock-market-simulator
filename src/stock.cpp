#include "../include/Stock.h"

Stock::Stock(string symbol, string companyName, double price) {
    this->symbol = symbol;
    this->companyName = companyName;
    this->price = price;
}

string Stock::getSymbol() const {
    return symbol;
}

string Stock::getCompanyName() const {
    return companyName;
}

double Stock::getPrice() const {
    return price;
}

void Stock::updatePrice(double newPrice) {
    price = newPrice;
}