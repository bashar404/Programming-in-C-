#include<iostream>
using namespace std;

int main()
{
    cout<<"Welcome";
    int i=3;
    try{
        if(i==1)
            throw 10;
        if(i==2)
            throw "hi";
        if(i==3)
            throw 3.0;

       }

   catch(...){
        cout<<"\nI am in catch and i is:"<<i;
                }
    cout<<"\nlast line";
}
