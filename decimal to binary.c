#include<stdio.h>
int main()
{
    int num,res,i=0,arr[50];
    printf("Enter the number \n");
    scanf("%d",&num);
    while(num!=0)
    {
        res=num%2;
        arr[i]=res;
        // printf("%d",i);
        i++;
        num=num/2;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",arr[j]);
    }
}