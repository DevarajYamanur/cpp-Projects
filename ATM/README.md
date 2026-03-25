# 🏧 ATM-CPP — Console-Based ATM Simulation in C++

A fully functional **ATM (Automated Teller Machine) simulation** built in C++. This project demonstrates core Object-Oriented Programming concepts including encapsulation, class design, and multi-file project structure.

---

## 📋 Table of Contents

- [Features](#features)
- [Project Structure](#project-structure)
- [Prerequisites](#prerequisites)
- [How to Compile & Run](#how-to-compile--run)
- [How to Use](#how-to-use)
- [Sample Test Accounts](#sample-test-accounts)
- [Concepts Demonstrated](#concepts-demonstrated)

---

## Features

- 🔐 **PIN-based Authentication** — Secure account login with PIN validation
- 💰 **Deposit** — Add funds to your account
- 💸 **Withdraw** — Withdraw funds with balance check
- 📊 **Balance Inquiry** — View current balance with 2 decimal precision
- 🔄 **Multi-account Support** — Multiple accounts can be registered in the ATM
- 🚪 **Logout & Session Management** — Secure session handling between users

---

## Project Structure

```
ATM-CPP/
├── Account.hpp      # Account class declaration
├── Account.cpp      # Account class implementation
├── ATM.hpp          # ATM class declaration
├── ATM.cpp          # ATM class implementation (menu, auth, transactions)
├── ATMDemo.cpp      # Main entry point — sets up accounts and starts ATM
└── README.md        # Project documentation
```

---

## Prerequisites

- **g++ compiler** (GCC) with C++17 support or later
- Works on **Windows**, **Linux**, and **macOS**

### Check if g++ is installed:
```bash
g++ --version
```

**Install on Windows:** Download [MSYS2](https://www.msys2.org/) or [MinGW](https://www.mingw-w64.org/)  
**Install on Linux:** `sudo apt install g++`  
**Install on macOS:** `xcode-select --install`

---

## How to Compile & Run

### Option 1 — Single command (Recommended)

```bash
g++ -std=c++17 Account.cpp ATM.cpp ATMDemo.cpp -o atm && ./atm
```

**On Windows (PowerShell):**
```powershell
g++ -std=c++17 Account.cpp ATM.cpp ATMDemo.cpp -o atm.exe; .\atm.exe
```

### Option 2 — Compile separately then link

```bash
g++ -std=c++17 -c Account.cpp -o Account.o
g++ -std=c++17 -c ATM.cpp    -o ATM.o
g++ -std=c++17 -c ATMDemo.cpp -o ATMDemo.o
g++ Account.o ATM.o ATMDemo.o -o atm
./atm
```

---

## How to Use

Once the program starts, you'll be prompted for your **account number** and **PIN**:

```
Welcome to ATM
Enter your account number: 1234
Enter PIN: 5678
Authentication successful!

ATM Menu:
1. Check Balance
2. Deposit
3. Withdraw
4. Logout
5. Exit
Enter your choice:
```

- Enter `1` to view your balance
- Enter `2` to deposit money
- Enter `3` to withdraw money
- Enter `4` to logout and switch accounts
- Enter `5` to exit the program

---

## Sample Test Accounts

The demo is pre-loaded with two test accounts:

| Account Number | PIN  | Starting Balance |
|:--------------:|:----:|:----------------:|
| `1234`         | `5678` | ₹1,000.00      |
| `4321`         | `8765` | ₹2,000.00      |

---

## Concepts Demonstrated

| Concept | Where Used |
|---------|------------|
| **Classes & Objects** | `Account`, `ATM` classes |
| **Encapsulation** | Private members with public getters |
| **Multi-file project** | `.hpp` headers + `.cpp` implementations |
| **Pointers & Dynamic Memory** | `Account*` in `std::vector`, `new`/`delete` |
| **Input Validation** | Amount checks in `deposit()` / `withdraw()` |
| **Constructor Initializer Lists** | `Account` constructor |
| **`const` correctness** | `getBalance()`, `validatePin()`, etc. |

---

## License

This project is open-source and free to use for learning purposes.

---

*Part of the [cpp-Projects](https://github.com/DevarajYamanur/cpp-Projects) collection.*