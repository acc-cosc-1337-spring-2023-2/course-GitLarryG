//checking_account.h
#include "bank_account.h"

#ifndef CHECKING_ACCOUNT_H
#define  CHECKING_ACCOUNT_H

class CheckingAccount : public BankAccount
{
public:    
    CheckingAccount(){}
    CheckingAccount(int b) : BankAccount(b){}
};

#endif
// {

// friend void show_balance(const CheckingAccount &account);
// friend std::ostream& operator();

// public:
//     CheckingAccount(){get_balance_from_db();}
//     CheckingAccount(int b) : balance(b){/*empty function code block*/}
//     int get_balance() const {return balance;}
//     void deposit(int amount);
//     void withdraw(int amount);

// private:
//     int balance{0}; // explicitly initialize to zero
//     void get_balance_from_db();
// };
