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
    int num;
    printf("Enter the numbers\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
            {
                if(isprime(i))
                    printf("%d ",i);
            }
            
    }
}