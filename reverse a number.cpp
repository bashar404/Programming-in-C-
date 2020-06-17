int main()
{
    int n,remaindar,reverse=0;
   cout<<"Enter a digit";
   cin>>n;  //123
   while(n>0)
   {
       remaindar=n%10;//3//2//1
       reverse=reverse*10+remaindar;//3//32//321
       n=n/10;//12//1
   }
   cout<<reverse;
}

