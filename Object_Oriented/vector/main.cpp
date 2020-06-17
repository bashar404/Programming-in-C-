#include <iostream>
#include<vector>
using namespace std;

int main()
{
 vector <int>v1;  //ekane capacity bydefault 1
 cout<<v1.capacity()<<endl;;
 vector<int>v2(5); //capacity size 5
 vector<int>v3(5,10); // 5 ta array te e 10 raklam 10 | 10 | 10 | 10 | 10
 cout<<v3[0]<<" "<<v3[1]<<" "<<v3[2]<<" "<<v3[3]<<" "<<v3[4]<<endl;
 vector<string>v4(3);// 3 ta string nilam kisu rakar jonno
 vector<string>v5(4,"hello");
cout<<v5[0]<<" "<<v5[1]<<" "<<v5[2]<<" "<<v5[3]<<endl;
vector <int> v6{10,20,30,40,50};
for(int i=0;i<5;i++)
    cout<<v6[i];
//push_back() er sahajje amra vector er sesh a j kono value add korte pari
v1.push_back(10);
cout<<"\n" "Update capacity of v1 is "<<v1.capacity()<<endl;
for(int i=0;i<1;i++)
    cout<<v1[i];

v1.push_back(20);
cout<<"\n" "Update capacity of v1 is "<<v1.capacity()<<endl;
for(int i=0;i<2;i++)
    cout<<v1[i];

v1.push_back(20);
cout<<"\n" "Update capacity of v1 is "<<v1.capacity()<<endl;
for(int i=0;i<3;i++)
    cout<<v1[i];

  //pop_back removes last element also reduce the array size
for(int j=0;j<10;j++)

   v2.push_back(10*(j+1));
cout<<"\n" "Update capacity of v2 is "<<v2.capacity()<<endl;





return 0;
}
