//atm.h
#include<iostream>
#include<vector>
#include "bank_account.h"
#include "customer.h"
#include<memory>


void display_menu();
void run_menu(std::vector<Customer*> customers);
void handle_menu_option(int option, std::unique_ptr<Customer> &customers);