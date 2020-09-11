#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

float medain_by_stl(vector<int> ve, int n)
{
    if((n&1)!=0)   //odd
    {
    nth_element(ve.begin(), ve.begin()+ve.size()/2 ,ve.end());
    return ve[ve.size() / 2]; 
    }
  else     
    {
        nth_element(ve.begin(), ve.begin() + n/2, ve.end()); //nth_element on ve.size()/2 position
        nth_element(ve.begin(), ve.begin() + (n-1)/2, ve.end()); 

       return  (    ( ve[n/2] +ve[(n-1)/2] ) /2.0  ) ; // will not work if provide only 2 instead of 2.0
  
  
    }
  
}

int main() 
{
  vector<int>ve;
  ve={1, 3, 4, 2, 6, 5, 7,8};
  sort(ve.begin(),ve.end());

  int n=ve.size();
    
  cout<<medain_by_stl(ve, n);
}

//		return (double)(a[(n - 1) / 2] 	+ a[n / 2])	/ 2.0; 
