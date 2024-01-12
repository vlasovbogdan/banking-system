// Customer.cpp
#include "Customer.h"
#include "Account.h"
#include <iostream>

Customer::Customer(const std::string& name, const std::string& email) : name(name), email(email) {}

const std::string& Customer::getName() const {
    return name;
}

const std::string& Customer::getEmail() const {
    return email;
}

void Customer::addAccount(Account* account) {
    accounts.push_back(account);
}

void Customer::displayCustomerInfo() const {
    std::cout << "Customer Name: " << name << ", Email: " << email << std::endl;
    std::cout << "Accounts:" << std::endl;

    for (const auto& account : accounts) {
        account->displayAccountInfo();
        std::cout << std::endl;
    }
}
