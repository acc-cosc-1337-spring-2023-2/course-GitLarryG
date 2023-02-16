#include "do_while.h"

//Write code for void function prompt_user to loop until
//user opts not to continue.  
void do_while()
{
    auto choice = 'n';
    
    do
    {
        cout<<"Continue, enter y...";
        cin>>choice;
    }
    while(choice == 'y' || choice == 'Y');

}

void display_menu()
{
    cout<<"ACC do while menu\n";
    cout<<"1-Customer\n";
    cout<<"2-Vendor\n";
    cout<<"3-Payroll\n";
    cout<<"4-Exit\n";
}

void run_menu()
{
    auto option = 0;

    do
    {
        display_menu();
        cout<<"Enter menu option: \n";
        cin>>option;

        handle_menu_option(option);

    }
    while (option /= 4);
}

void handle_menu_option(int num)
{
    switch(num)
    {
        case 1:
            cout<<"\nSelected Customer option: \n";
            break;
        case 2:
            cout<<"\nSelected Vendor option: \n";
        case 3:
            cout<<"\nSelected Payroll option: \n";
        case 4:
            cout<<"\nSelected Exit option: \n";
    }
}