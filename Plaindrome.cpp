int main()
{
   string s1="madam";   //char s1[10];    cout<<"Enter a string";     gets(s1);
   int l=s1.size();    // int l=strlen(s1);
   int i;
   for( i=0;i<(l/2);i++ )
   {
       if(s1[i]!=s1[l-1-i])
       {
            std::cout << "Not Plaindrome" << std::endl;
            break;
       }
           
   }
   
   if(i==l/2)
        std::cout << "Plaindrome" << std::endl;
}
/*
//With Function


int isPlaindrome (char s1[])
{
    int l=strlen(s1);
   int i;
   for( i=0;i<(l/2);i++ )
   {
       if(s1[i]!=s1[l-1-i])
       {
            return 0;
            break;
       }
           
   }
   
   if(i==l/2)
        return 1;
}

int main()
{
   char s1[10];
   cout<<"Enter a string";
   gets(s1);
   if(isPlaindrome(s1)) 
        cout<<"Plaindrome";
    else
        cout<<"Not Plaindrome";
   
}  

*/