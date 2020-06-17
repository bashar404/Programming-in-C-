/*
Have the function LongestWord(sen) take the sen parameter being passed and return the largest word in the string.
 If there are two or more words that are the same length, return the first word from the string with that length. Ignore punctuation and assume sen will not be empty.
Input: "fun&!! time"
Output: time
Input: "I love dogs"
Output: love
*/
#include <stdio.h> 
#include <string.h>

void LongestWord(char sen[]) {
  
  int j=0, len=0;
  char b[50],c[50];
  for(int i=0;i<=strlen(sen);i++)
  {
     if(sen[i]!=32 && sen[i]!=0) //if( tolower(sen[i])>=97 && tolower(sen[i])<=122)
//if((sen[i]>=97 && sen[i]<=122)||(sen[i]>=65 && sen[i]<=90)||(sen[i]>=48 && sen[i]<=57))

     {
       b[j]=sen[i];
       j++;
     }

     else
     {
       b[j]='\0';
       if(strlen(b)>len)
       {
         strcpy(c,b);
         len=strlen(b);
       }

    j=0;

     }
  }
sen=c;
  //return c;
  printf("%s", sen);

}

int main(void) 
{ 
  LongestWord(gets(stdin));
  return 0;
}
