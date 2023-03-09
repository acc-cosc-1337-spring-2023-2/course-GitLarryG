#include<iostream>
#include "checking_account.h"
#include<time.h>
#include "atm.h"

using std::cout;

int main()
{
	srand(time(NULL));

	CheckingAccount account;//cust 0
	cout<<account;
	cout<<account.get_balance()<<"\n";

	show_balance(account);
	//run_menu(account);


	CheckingAccount account1;//cust 1
	cout<<account.get_balance()<<"\n";

	return 0;
}