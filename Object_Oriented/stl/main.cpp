#include <iostream>
#include<array>
using namespace std;

int main()
{
    array <int,8> data_array={11,22,33,44,55};
    cout<<"\n"<<data_array.at(2);
    //cout<<data_array.at(7);  //terminate:out of range
    cout<<"\n"<<data_array[2];
    cout<<"\n"<<data_array.front();
    cout<<"\n"<<data_array.back();
    data_array.fill(10);
    for(int i=0;i<8;i++)
        cout<<data_array[i];
    cout<<endl;
    array <int,5> data_array1={11,22,33,44,55};
    array <int,5> data_array2={66,77,88,99,98};
    data_array1.swap(data_array2);
    for(int i=0;i<5;i++)
        cout<<data_array1[i];
    cout<<endl;
    for(int i=0;i<5;i++)
        cout<<data_array2[i];
cout<<endl;
cout<<"Size of data_array"<<data_array.size();
    return 0;
}
