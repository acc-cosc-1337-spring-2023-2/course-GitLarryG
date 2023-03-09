//checking_account.cpp
#include "bank_account.h"
#include "checking_account.h"


#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT



void CheckingAccount::get_balance_from_db()
{
    balance = rand() % 10000 + 1;//value between 1 and 10000
}

void CheckingAccount::deposit(int amount)
{
    if(amount > 0)
    {
        balance += amount;
    }
}

void CheckingAccount::withdraw(int amount)
{
    if(amount > 0 && amount <= balance)
    {
        balance -= amount;
    }
}

//Free function; NOT {ART OF THE CLASS!!!
void show_balance(CheckingAccount &account)
{
    std::cout<<"Friends balance: "<<account.balance<<"\n";
}

std::ostream& operator<<(std::ostream& out, const CHeckingAccount)