//atm.cpp
#include "atm.h"
#include "checking_account.h"
#include "savings_account.h"
#include "customer.h"
#include<iostream>
#include<vector>
#include<memory>

using std::cout; using std::cin;

void display_menu()
{
    cout<<"\n\nAcc COSC Bank\n\n";
    cout<<"1-Deposit\n";
    cout<<"2-Withdraw\n";
    cout<<"3-Balance\n";
    cout<<"4-Exit\n";
}

void run_menu(std::vector<Customer>& customers)
{
    auto option = 0;
    auto choice = 0;

    auto customer = customers[0];

	cout<<"Checking(1) or savings(2) ";
	cin>>choice;

    std::unique_ptr<BankAccount> &account;

    do
    {
        display_menu();
        cout<<"Enter menu option: ";
        cin>>option;
        handle_menu_option(option, account);

    } while (option != 4);
   
}

void handle_menu_option(int option, BankAccount *account)
{
    auto amount = 0;

    switch(option)
    {
    case 1:
        cout<<"Enter deposit amount: ";
        cin>>amount;
        account->deposit(amount);
        break;
    case 2:
        cout<<"Enter withdraw amount: ";
        cin>>amount;
        account->withdraw(amount);
        break;
    case 3:
        cout<<"Balance: ";
        cout<<account->get_balance()<<"\n";
        break;
    case 4:
        cout<<"Exiting ...\n";
        break;
    default:
        cout<<"Invalid option ...";
        break;
    }
}

