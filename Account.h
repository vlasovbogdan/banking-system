// Account.h
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <vector>
#include "Transaction.h"

class Transaction; // Forward declaration

class Account {
public:
    Account(int accountNumber, double balance);

    int getAccountNumber() const;
    double getBalance() const;

    void deposit(double amount);
    bool withdraw(double amount);
    void addTransaction(Transaction* transaction);
    void displayAccountInfo() const;

private:
    int accountNumber;
    double balance;
    std::vector<Transaction*> transactions;
};

#endif // ACCOUNT_H
