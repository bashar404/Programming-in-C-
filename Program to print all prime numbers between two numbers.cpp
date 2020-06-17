int main()
{
int a,b,i,j;
cout<<"Enter start and End point";
cin>>a>>b;
for(i=a;i<b;i++)
 {    int x=i;
    for( j=2;j<=x;j++)   //prime number starts from 2
    {
        if(x%j==0)
            break;
    }
    if(x==j)
        cout<<x<<",";
 }
    return 0;
}
