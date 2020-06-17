/*
Have the function AlphabetSoup(str) take the str string parameter being passed and return 
the string with the letters in alphabetical order (ie. hello becomes ehllo). Assume numbers and punctuation symbols will not be included in the string.
Examples
Input: "coderbyte"
Output: bcdeeorty
Input: "hooplah"
Output: ahhloop

*/

#include <stdio.h> 
#include <string.h>

void AlphabetSoup(char str[]) 
{
  int i,j;
  char str1[50];
  char temp;
  strcpy(str1,str);
  for( i=0;i<strlen(str1);i++)
  {
    for( j=i+1;j<strlen(str1);j++)
    {
      if(  str1[i] >  str1[j] )

          {
          temp=str1[i];
          str1[i]=str1[j];
          str1[j]=temp;
          }  
    }
    printf("%c",str1[i]);  
  }

}

int main(void) { 

  AlphabetSoup(gets(stdin));
  return 0;  
}
