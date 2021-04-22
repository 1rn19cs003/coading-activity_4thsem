#include<stdio.h>
#include<stdlib.h>
void even(int count,int arr[10])
{
    for(int i=count-1;i>=0;i--)
    {
        if(arr[i]%2==0)
            printf("%d ",arr[i]);
        else 
            continue;
    }
    printf("\n");
}
void odd(int count,int arr[10])
{
    for(int i=count-1;i>=0;i--)
    {
        if(arr[i]%2!=0)
            printf("%d ",arr[i]);
        else 
            continue;
    }
    printf("\n");
}
int seperate(int num,int arr[10])
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
    int num,count,arr[10],ch;
    printf("Enter the number\n");
    scanf("%d",&num);
    count=seperate(num,arr);
    while(1)
    {
        printf("1.To print odd digits \n2.To print even digits\n3.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:odd(count,arr);
                break;
            case 2:even(count,arr);
                break;
            case 3:exit(0);
            default:printf("Enter a valid choice\n");
        }
    }
}