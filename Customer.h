// Customer.h
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "Account.h"

class Account; // Forward declaration

class Customer {
public:
    Customer(const std::string& name, const std::string& email);

    const std::string& getName() const;
    const std::string& getEmail() const;

    void addAccount(Account* account);
    void displayCustomerInfo() const;

private:
    std::string name;
    std::string email;
    std::vector<Account*> accounts;
};

#endif // CUSTOMER_H
