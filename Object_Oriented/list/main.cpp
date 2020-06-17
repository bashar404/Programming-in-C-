#include<iostream>
#include<map>
using namespace std;
int main()
{
map<int,string>customer;
    customer[100]="Gajendra";
    customer[123]="Dilip";
    customer[145]="Aditya";
    customer[171]="Shahid";

    cout<<customer[123];

    map<int,string>c{
    {121,"Golam"},{122,"Bashar"}
                    };

    cout<<c[121];

    map<int,string>::iterator p=customer.begin();
    while(p!=customer.end())
    {
        cout<<"\n"<<p->second;
        cout<<"\n"<<p->first;
        p++;
    }
        cout<<"\n"<<customer.size();
cout<<"\n"<<customer.empty();
map<int,string>ca{
                    };
   cout<<"\n"<<ca.size();
    cout<<"\n"<<customer.size();
    customer.clear();
     cout<<"\n"<<customer.size();
     customer.insert(pair<int,string>(1,"Golam"));
      cout<<"\n"<<customer.size();
}
