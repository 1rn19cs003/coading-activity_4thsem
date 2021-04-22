#include<stdio.h>
int seperate(int num,int arr[100])
{
    int rem,i=0;
    while(num!=0)
    {
        
        rem=num%10;
        arr[i]=rem;
        i++;
        num=num/10;
    }
    return i;
}
int main()
{
    int num,arr[100],count=0;
    printf("Enter the number \n");
    scanf("%d",&num);
    count=seperate(num,arr);
    for(int i=count-1;i>=0;i--)
        printf("%d ",arr[i]);
}