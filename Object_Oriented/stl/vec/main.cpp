#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v1;
    cout<<"capacity of v1 "<<v1.capacity();  //0
    vector <int> v2(3);
    cout<<"\ncapacity of v2 "<<v2.capacity(); //3
    vector <int> v3(10,80);
     cout<<"at function"<<endl;
    cout<<v3.at(1)<<endl;
    cout<<"front\n"<<v3.front()<<endl;
    cout<<"back\n"<<v3.back()<<endl;

    cout<<"\ncapacity of v3 "<<v3.capacity();//5

    vector <string> v4(2,"Bashar");
    cout<<v4[0];  //Bashar
    cout<<v4[1];  //Bashar

    vector <int> v5 {10,20,30,40,50};
    cout<<"\ncapacity of v5 \n"<<v5.capacity(); //5
    for(int i=0;i<5;i++)
            cout<<"\t"<<v5[i];
    //push_back
    cout<<endl;




    v5.push_back(60);
    for(int i=0;i<v5.size();i++)
            cout<<"\t"<<v5[i];
    cout<<"\n v5 "<<v5.capacity();//10

    vector <int> v6;
    for(int i=0;i<5;i++)
    {
     v6.push_back(10*(i+1));
     cout<<"\nv6 is"<<v6[i];
     cout<<"\n\nCapacity of v6 is"<<v6.capacity();
    }

    v6.pop_back();cout<<"\n\nElements in v6 is"<<v6.size();
    v6.pop_back();cout<<"\n\nElements in v6 is"<<v6.size();
    v6.pop_back();cout<<"\n\nElements in v6 is"<<v6.size();
    v6.pop_back();cout<<"\n\nElements in v6 is"<<v6.size();
    cout<<"\n\nCapacity of v6 is"<<v6.capacity();//
    cout<<"\n\nElements in v6 is"<<v6.size();


    v6.clear();
    cout<<"\n\nCapacity of v6 is"<<v6.capacity();//
    cout<<"\n\nElements in v6 is"<<v6.size();
    return 0;
}
