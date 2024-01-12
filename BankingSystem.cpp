// BankingSystem.cpp
#include "Customer.h"
#include "Account.h"
#include "Transaction.h"
#include <iostream>

int main() {
    Customer customer1("John Doe", "john@example.com");
    Customer customer2("Jane Doe", "jane@example.com");

    Account account1(1, 1000.0);
    Account account2(2, 500.0);

    customer1.addAccount(&account1);
    customer2.addAccount(&account2);

    Transaction transaction1(&account1, &account2, 200.0);
    account1.addTransaction(&transaction1);
    account2.addTransaction(&transaction1);

    std::cout << "Customer Information:" << std::endl;
    customer1.displayCustomerInfo();
    std::cout << std::endl;
    customer2.displayCustomerInfo();

    return 0;
}
