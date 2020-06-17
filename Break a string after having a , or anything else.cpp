#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    char str[] = "Geeks,for,Geeks";
    char *token = strtok(str, ",");                                                          //strtok means string tokenizer 
    
    while(token != NULL)
    {
        printf("%s\n",token);
        token= strtok(NULL,",");                                    //second time call korar somoy Null dite hobe noile first j man dibe tai e ashte thakbe
    }

    return 0;
}
