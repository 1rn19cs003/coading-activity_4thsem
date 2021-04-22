#include<stdio.h>
int main()
{
    int var,flag=0;
    printf("Enter the number\n");
    scanf("%d",&var);
    for(int i=0;i<var;i++)
    {
        if(i*(i+1)==var)
        {
            flag=1;
            break;
        }
        else
            flag=0;
    }
    if(flag==1)
        printf("Number is pronic number\n");
    else
        printf("Number is not a pronic number\n");
    
}