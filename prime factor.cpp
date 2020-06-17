int main()
{
int n,i;
cout<<"Enter a number";
cin>>n;

for(i=2;n>1;i++)
 {
            while(n%i==0)
            {
            cout<<i;
            n=n/2;
            }
}
    return 0;
}
