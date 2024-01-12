// Transaction.h
#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>
#include "Account.h"

class Account; // Forward declaration

class Transaction {
public:
    Transaction(Account* sourceAccount, Account* destinationAccount, double amount);

    Account* getSourceAccount() const;
    Account* getDestinationAccount() const;
    double getAmount() const;

    void displayTransactionInfo() const;

private:
    Account* sourceAccount;
    Account* destinationAccount;
    double amount;
};

#endif // TRANSACTION_H
