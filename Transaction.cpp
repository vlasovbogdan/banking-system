// Transaction.cpp
#include "Transaction.h"
#include <iostream>

Transaction::Transaction(Account* sourceAccount, Account* destinationAccount, double amount)
    : sourceAccount(sourceAccount), destinationAccount(destinationAccount), amount(amount) {}

Account* Transaction::getSourceAccount() const {
    return sourceAccount;
}

Account* Transaction::getDestinationAccount() const {
    return destinationAccount;
}

double Transaction::getAmount() const {
    return amount;
}

void Transaction::displayTransactionInfo() const {
    std::cout << "Source Account: " << sourceAccount->getAccountNumber() << ", Destination Account: "
              << destinationAccount->getAccountNumber() << ", Amount: $" << amount;
}
