#include <iostream>

using namespace std;
int isPrime(int n)
{
    for(int j=2;j<n;j++)
    {
        if(n%j==0)
            return 0;
    }return 1;
}
int nextprime(int n)
{
   do{
        n++;      
   }while(!isPrime(n));
   return n;
}



int main()
{
    int x,i;
    cout<<"Enter a number:";
    cin>>x;
    
    for(i=2;i<=(x-i);i=nextprime(i))
    {
        if(isPrime(x-i))
            cout<<i<<"+"<<x-i<<"="<<x;
    }
    
    return 0;
}
