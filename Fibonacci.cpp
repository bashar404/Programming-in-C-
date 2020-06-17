include <stdio.h>

int fibonacci(int n)
{
    if(n==1 || n==2)
        return 1;
    else
        return (fibonacci(n-2)+fibonacci(n-1));
}

int main()
{
    printf("Hello World");
int n;
    printf("Series:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        printf("%d",fibonacci(i));
    return 
