using namespace std;
int main()
{
int i,n,c=0;
printf("Enter a digit:");
scanf("%d",&n);
while(n!=0)
{
    n=n/10;
    c++;
}
cout<<c;
        return 0;
}
