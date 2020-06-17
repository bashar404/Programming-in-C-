#include <iostream>

using namespace std;

int main()
{
    int a[8]={1,2,7,8,20,22,30,33};
    int b[7]={2,5,6,9,10,20,22};
    int c[15]; int n=0;
    int n_a=sizeof(a)/sizeof(a[0]);
    int n_b=sizeof(b)/sizeof(b[0]);
    cout<<n_a<<endl;
cout<<n_b<<endl;
  for(int i=0;i<n_a;i++)
    {
        int found=0;
        for(int j=0; j<n_b && !found; j++)
        {
            if(a[i]==b[j])
                found=1;
            if(found)
                c[n++]=a[i];
        }
    }


for(int i=0;i<n;i++)
{
    printf("%d ",c[i]);
}

    return 0;
}
