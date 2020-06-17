/*
Letter Changes
Have the function LetterChanges(str) take the str parameter being passed and modify it using the following algorithm. Replace every letter in the string with the letter following it in the alphabet (ie. c becomes d, z becomes a). Then capitalize every vowel in this new string (a, e, i, o, u) and finally return this modified string.
Examples
Input: "hello*3"
Output: Ifmmp*3
Input: "fun times!"
Output: gvO Ujnft!
*/
include <stdio.h> 
#include <string.h>

void LetterChanges(char str[]) 
{
  char temp[20];
  memset(temp,0,20);  //fill temp with all zero
  for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>=97 && str[i]<=122)
          temp[i]=str[i]+1;
        else
          temp[i]=str[i];
        if(temp[i]==97 || temp[i]==101 || temp[i]==105 || temp[i]==111 || temp[i]==117)
          {
               temp[i]=temp[i]-32;  //-32
          }
         
    }
    
  printf("%s",temp);

}

int main(void) 
{ 
  LetterChanges(gets(stdin));
  return 0;  
}

//alernative
/*
#include <iostream>
#include <string>
using namespace std;

string LetterChanges(string str) {
  
//char str[20];
  int length=str.length();
  int i;
 
  for(i=0;i<length-1;i++)
  {
    if(str[i]>=97 && str[i]<=122)
    {
      str[i]=str[i]+1;
    }

    else
      str[i]=str[i];

      if ( str[i]==97 || str[i]==101 || str[i]==105 || str[i]==111 || str[i]==117 )
      {
        str[i]=str[i] - 32;       
      }

  }
  return str;

}

int main(void) { 
   
  // keep this function call here
  cout << LetterChanges(gets(stdin));
  return 0;
    
}

*/