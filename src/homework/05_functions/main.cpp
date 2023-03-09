#include"func.h"

int main() 
{
	int option;
	string dna;
	cout<<"1- Get GC Content\n";
	cout<<"2- Get DNA Complement\n";
	cout<<"3- Exit\n";
	cout<<"Enter Menu Choice: ";
	cin>>option;
	if (option == 1)
	{
		cout<<"\n\nEnter DNA String: ";
		cin>>dna;
        auto output = get_gc_content(dna);
		cout<<"\n"<<output<<"\n\n";
	}
	else if (option == 2)
	{
		cout<<"\n\nEnter DNA String: ";
		cin>>dna;
        string output2 = get_dna_completion(dna);
		cout<<"\n"<<output2<<"\n\n";
	}
	else if (option == 3)
		cout<<"\n\nExiting...\n\n";
    else
    {
		cout<<"\n\nInvalid option\n\n";        
	}
	// string dna = "AGCTATAG";
	// double percent = get_gc_content(dna);
	// string reverse = get_reverse_string(dna);
	// string complete = get_dna_completion(dna);
	// cout<<"\n"<<complete<<"\n";
	return 0;
}