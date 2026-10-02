#include <iostream>
#include "include/Market.h"
#include "include/User.h"

using namespace std;

int main() {

    // =========================
    // Create Market
    // =========================

    Market market;

    market.addStock(
        Stock("TCS", "Tata Consultancy Services", 3800)
    );

    market.addStock(
        Stock("INFY", "Infosys", 1650)
    );

    market.addStock(
        Stock("RELIANCE", "Reliance Industries", 1420)
    );

    market.addStock(
        Stock("HDFC", "HDFC Bank", 1750)
    );


    // =========================
    // Create User
    // =========================

    User user(100000);


    // =========================
    // Main Menu
    // =========================

    int choice;

    do {

        cout << "\n\n";
        cout << "====================================\n";
        cout << "       STOCK MARKET SIMULATOR       \n";
        cout << "====================================\n";

        cout << "1. Show Market\n";
        cout << "2. Buy Stock\n";
        cout << "3. Sell Stock\n";
        cout << "4. Show Portfolio\n";
        cout << "5. Update Stock Price\n";
        cout << "6. Show Balance\n";
        cout << "7. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;


        // =========================
        // Show Market
        // =========================

        if (choice == 1) {

            market.displayMarket();
        }


        // =========================
        // Buy Stock
        // =========================

        else if (choice == 2) {

            string symbol;
            int quantity;

            cout << "\nEnter stock symbol: ";
            cin >> symbol;

            cout << "Enter quantity: ";
            cin >> quantity;

            user.buyStock(
                market,
                symbol,
                quantity
            );
        }


        // =========================
        // Sell Stock
        // =========================

        else if (choice == 3) {

            string symbol;
            int quantity;

            cout << "\nEnter stock symbol: ";
            cin >> symbol;

            cout << "Enter quantity: ";
            cin >> quantity;

            user.sellStock(
                market,
                symbol,
                quantity
            );
        }


        // =========================
        // Show Portfolio
        // =========================

        else if (choice == 4) {

            user.showPortfolio();
        }


        // =========================
        // Update Stock Price
        // =========================

        else if (choice == 5) {

            string symbol;
            double newPrice;

            cout << "\nEnter stock symbol: ";
            cin >> symbol;

            cout << "Enter new price: ";
            cin >> newPrice;

            Stock* stock = market.findStock(symbol);

            if (stock != nullptr) {

                stock->updatePrice(newPrice);

                cout << "Price updated successfully.\n";
            }
            else {

                cout << "Stock not found.\n";
            }
        }


        // =========================
        // Show Balance
        // =========================

        else if (choice == 6) {

            user.showBalance();
        }


        // =========================
        // Exit
        // =========================

        else if (choice == 7) {

            cout << "\nThank you for using Stock Market Simulator!\n";
        }


        else {

            cout << "\nInvalid choice. Try again.\n";
        }

    } while (choice != 7);


    return 0;
}