//Length of a string
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char s[20]="Golam Dast";
    printf("%d",strlen(s));

   char s1[100];
   printf("Enter your name:");
   gets(s1);
   int n=strlen(s1);
   printf("length: %d",n);


    return 0;
