#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>

using namespace std;

int main()
{
char arr1[50],arr2[50];
std::cout << "Enter a string: " << std::endl;
gets(arr1);


int i=0,j=0;
while(arr1[i]!='\0')
    i++;
cout<<"Length of string is "<<i<<endl;

    while(i>0)
    {
        arr2[j]=arr1[i-1];
        i--;
        j++;
    }
arr2[j]='\0';
cout<<"reverse: "<<arr2<<endl;

        for(i=0; arr2[i]!='\0';i++)
        {
            if(arr2[i+1]==' ' || arr2[i+1]=='\0')
            {
                for(j=i; j>=0 && arr2[j]!=' ' ;j--)
                    cout<<arr2[j];
            }
        cout<<"";
        }


}
