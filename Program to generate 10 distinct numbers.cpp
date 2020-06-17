
int main()
{
    srand(time(NULL));
    int i,j,temp;
    int a[10];
    for(i=0;i<10;i++)
    {
        temp=rand()%10;
        for(j=0;j<i;j++)
        {
            if(temp==a[j])
                break;
        }
        if(i==j)
            a[i]=temp;
       else
            i--;
    }
    
    for(i=0;i<10;i++)
        cout<<a[i];
}

