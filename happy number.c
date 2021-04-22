#include<stdio.h>
int seperate(int num)
{
    int i=0,rem=0,sum=0;
    while(num!=0)
    {
        
        rem=num%10;
        sum=sum+(rem*rem);
        i++;
        num=num/10;
    }
    return sum;
}
int main()
{
    int num,sum=0,arr[10],num_of_digit;
    printf("Enter the value\n");
    scanf("%d",&num);
    sum=num;
    while(sum!=1 && sum!=4)
    {
        sum=seperate(sum);
        // num_of_digit=seperate(sum,arr);
        // sum=add(num_of_digit,arr);
       
    }
    // printf("%d\n",sum);
    if(sum==1)
        printf("Number is Happy Number\n");
    else if(sum==4)
        printf("Number is not a Happy Number\n");
}