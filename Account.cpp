// Account.cpp
#include "Account.h"
#include "Transaction.h"
#include <iostream>

Account::Account(int accountNumber, double balance) : accountNumber(accountNumber), balance(balance) {}

int Account::getAccountNumber() const {
    return accountNumber;
}

double Account::getBalance() const {
    return balance;
}

void Account::deposit(double amount) {
    balance += amount;
}

bool Account::withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
        return true;
    } else {
        std::cout << "Insufficient funds." << std::endl;
        return false;
    }
}

void Account::addTransaction(Transaction* transaction) {
    transactions.push_back(transaction);
}

void Account::displayAccountInfo() const {
    std::cout << "Account Number: " << accountNumber << ", Balance: $" << balance << std::endl;
    std::cout << "Transactions:" << std::endl;

    for (const auto& transaction : transactions) {
        transaction->displayTransactionInfo();
        std::cout << std::endl;
    }
}
