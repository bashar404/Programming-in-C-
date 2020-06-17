/*
First Reverse
Have the function FirstReverse(str) take the str parameter being passed and return the string in reversed order. 
For example: if the input string is "Hello World and Coders" then your program should return the string sredoC dna dlroW olleH.
*/
#include <iostream>
#include <string>
using namespace std;

string FirstReverse(string str) {
     str = "Hello World";
  int len = str.length();
  int n=len-1;
  for(int i=0;i<(len/2);i++){
    //Using the swap method to switch values at each index
    swap(str[i],str[n]);
    n = n-1;

  } 

  return str;

}

int main(void) { 
   
  cout << FirstReverse(gets(stdin));
  return 0;
    
}

/* alternative
#include <iostream>
#include <string>
using namespace std;

string FirstReverse(string str) {
  str="Hello World and Coders";
int i;
char temp;
int len=str.length();
int n=len-1;  //important
for( i=0; i<n; i++,n--)
{
temp=str[i];      //temp=str[0]=H;
str[i]=str[n];  	//str[0]=str[5]=o
str[n]=temp;
}
    return str;
}

int main(void) 
{ 
  cout << FirstReverse(gets(stdin));
  return 0; 
}
*/