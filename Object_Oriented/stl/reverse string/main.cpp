#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    string str="Hello World";
    char temp;
    int i;

    int len=str.length();
    int n=len-1;

    for(i=0;i<=n;i++,n-- )
    {
        temp=str[i];//t=h
        //str[i]=str[n];//s[o]=d
        str[n]=temp;

    }
cout<<str;
    return 0;
}
