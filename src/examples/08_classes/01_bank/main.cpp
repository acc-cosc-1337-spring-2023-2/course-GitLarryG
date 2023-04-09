#include<iostream>
#include "checking_account.h"
#include "savings_account.h"
#include<time.h>
#include "atm.h"
#include "customer.h"
#include<vector>
#include<memory>


using std::cout; using std::cin; using std::vector;
using std::unique_ptr; using std::make_unique; using std::move;

// int main()
// {
// 	srand(time(NULL));

// 	CheckingAccount account;//cust 0
// 	cout<<account;
// 	cout<<account.get_balance()<<"\n";

// 	show_balance(account);
// 	//run_menu(account);


// 	CheckingAccount account1;//cust 1
// 	cout<<account.get_balance()<<"\n";

// 	return 0;
// }

// int main()
// {
// 	vector<unique_ptr<BankAccount>> accounts;
// 	srand(time(NULL));

// 	accounts.push_back(make_unique<CheckingAccount>());
// 	accounts.push_back(make_unique<SavingsAccount>());

// 	cout<<accounts[0]->get_balance()<<"\n";
// 	cout<<accounts[1]->get_balance()<<"\n";

// 	run_menu(accounts);

// 	return 0;
// }


int main()
{
	
	srand(time(NULL));

	vector<Customer> customers;
	customers.push_back(Customer());
	customers.push_back(Customer());
	customers.push_back(Customer());
	customers.push_back(Customer());
	customers.push_back(Customer());

	ATMData data;
	data.save_customers(customers);
	std::vector<Customer>& customers = data.get_customers();

	for(auto& customer : customers)
	{
		cout<<customer.get_account(0)->get_balance()<<"\n";
		std::cout<<" ";
		cout<<customer.get_account(1)->get_balance()<<"\n";
		std::cout<<"\n";
	}

	//run_menu(customers);

	return 0;
}