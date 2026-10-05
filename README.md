# 📈 Stock Market Simulator

A console-based stock market simulator written in **C++** using **Object-Oriented Programming** concepts. Trade virtual stocks, manage a cash balance, and track your profit and loss, all without risking real money.

---

## Table of Contents

- [Features](#features)
- [Technologies](#technologies)
- [Project Structure](#project-structure)
- [Class Overview](#class-overview)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Future Improvements](#future-improvements)
- [Contributing](#contributing)
- [License](#license)

---

## Features

- View available stocks
- Buy stocks
- Sell stocks
- Manage a virtual cash balance
- Maintain a portfolio of holdings
- Update stock prices
- Calculate profit/loss

---

## Technologies

- **C++**
- **Object-Oriented Programming** (encapsulation, classes, abstraction)
- **STL** (Standard Template Library)

---

## Project Structure

```text
.
├── include/
│   ├── Stock.h
│   ├── Portfolio.h
│   ├── Market.h
│   └── User.h
├── src/
│   ├── Stock.cpp
│   ├── Portfolio.cpp
│   ├── Market.cpp
│   └── User.cpp
├── main.cpp
└── README.md
```

---

## Class Overview

| Class       | Responsibility                                                        |
|-------------|-----------------------------------------------------------------------|
| `Stock`     | Represents a single stock (symbol, price) and its price updates       |
| `Market`    | Holds the available stocks and handles price updates                  |
| `Portfolio` | Tracks the user's holdings and calculates profit/loss                 |
| `User`      | Manages the user's cash balance and ties together buying and selling  |

---

## Getting Started

### Prerequisites

- A C++ compiler with C++11 or later (e.g. `g++`, `clang++`, MSVC)

### Clone the Repository

```bash
git clone https://github.com/<your-username>/<repo-name>.git
cd <repo-name>
```

### Build

Using `g++`:

```bash
g++ -std=c++17 -Iinclude src/*.cpp main.cpp -o stock_simulator
```

### Run

```bash
./stock_simulator          # Linux / macOS
stock_simulator.exe        # Windows
```

---

## Usage

Once running, use the menu to view stocks, buy or sell shares, check your portfolio, update prices, and see your profit/loss.

<!-- Replace this with a real screenshot or copy of your program's output -->
```text
===== Stock Market Simulator =====
1. View stocks
2. Buy stock
3. Sell stock
4. View portfolio
5. Update prices
6. Show profit/loss
7. Exit
```

---

## Future Improvements

- Randomized price movement (e.g., random walk / Geometric Brownian Motion)
- Save and load portfolio from file
- Transaction history
- Transaction fees
- Limit orders
- Unit tests

---

## Contributing

Contributions are welcome.

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/my-feature`)
3. Commit your changes (`git commit -m "Add my feature"`)
4. Push to the branch (`git push origin feature/my-feature`)
5. Open a Pull Request

---

## License

This project is licensed under the MIT License. Add a `LICENSE` file to the repo to match.

---

> ⚠️ **Disclaimer:** This project is for educational purposes only and does not constitute financial advice.
