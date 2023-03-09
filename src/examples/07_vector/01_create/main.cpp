#include<iostream>
#include<vector>

using std::vector; using std::cout;

int main()
{
    vector<int> nums;//empty list
    cout<<"Size: "<<nums.size()<<"\n";
    cout<<"Capacity: "<<nums.capacity()<<"\n\n";

    nums.push_back(4);
    cout<<"Size: "<<nums.size()<<"\n";
    cout<<"Capacity: "<<nums.capacity()<<"\n\n";

    nums.push_back(10);
    cout<<"Size: "<<nums.size()<<"\n";
    cout<<"Capacity: "<<nums.capacity()<<"\n\n";

    nums.push_back(11);
    cout<<"Size: "<<nums.size()<<"\n";
    cout<<"Capacity: "<<nums.capacity()<<"\n\n";

    nums.push_back(5);
    cout<<"Size: "<<nums.size()<<"\n";
    cout<<"Capacity: "<<nums.capacity()<<"\n\n";

    nums.push_back(50);
    cout<<"Size: "<<nums.size()<<"\n";
    cout<<"Capacity: "<<nums.capacity()<<"\n\n";
    cout<<nums[]<<"\n";

    for (auto n: nums)
    {

    }

    cout<<"\n\n";
    vector<char> letters

    return 0;
}