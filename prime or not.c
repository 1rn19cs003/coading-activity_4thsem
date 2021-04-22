#include<stdio.h>
int main()
{
    int a,flag=0;
    printf("Enter the number \n");
    scanf("%d",&a);
    for(int i=2;(i*i)<a;i++)
    {
        if(a%i==1)
            flag=1;
        else 
            flag =0;
    }
    if(flag==1)
        printf("Given number is a prime number\n");
    else
        printf("Given number is not a prime number\n");
}