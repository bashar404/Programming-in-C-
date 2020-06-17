#include<string.h>
#include<iostream>

using namespace std;
int main()
{
    char s[20]="Golam";
    ///////char s[20];
   ////// printf("Enter a string");
  /////  gets(s);


    int n=strlen(s)-1;
    char temp;
        for(int i=0;i<=n;i++,n--)
        {
            temp=s[i]; //temp=G
            s[i]=s[n];//s[0]=m
            s[n]=temp;//str[4]=G

        }
        
        printf("%s",s);

        return 0;
}
