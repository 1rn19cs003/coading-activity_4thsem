#include<stdio.h>
int isprime(int a)
{
    if(a<=1)
        return 0;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
            return 0;
    }
    return 1;
        
}
int main()
{
    int n;
    printf("Enter the end point\n");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        if(isprime(i))
            printf("%d ",i);
        else 
            continue;
    }
}
