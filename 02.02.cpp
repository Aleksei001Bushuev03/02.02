#include <iostream>
#include <string>
#include <Windows.h>

struct BankAccount {
    int accountNumber;      
    std::string ownerName;  
    double balance;         
};

void updateBalance(BankAccount& account, double newBalance) {
    account.balance = newBalance;
}

int main() {
    BankAccount account;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Введите номер счёта: ";
    std::cin >> account.accountNumber;
    std::cin.ignore();

    std::cout << "Введите имя владельца: ";
    std::getline(std::cin, account.ownerName);

    std::cout << "Введите баланс: ";
    std::cin >> account.balance;

    double newBalance;
    std::cout << "Введите новый баланс: ";
    std::cin >> newBalance;

    updateBalance(account, newBalance);

    std::cout << "Ваш счёт: " << account.ownerName << ", "
        << account.accountNumber << ", " << account.balance << std::endl;

    return 0;
}
