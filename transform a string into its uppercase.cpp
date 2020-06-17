int main()
{
char s[]="hello";
char s1[100];
    for(int i=0;i<=strlen(s)-1;i++)
        putchar(toupper(s[i]));

cout<<"Enter a name";
gets(s1);

for(int i=0;i<strlen(s1)-1;i++)
    {
        if(s1[i]>='a' && s1[i]<='z')
            s1[i]=int(s1[i])-32;
    }

cout<<s1;

return 0;
}
