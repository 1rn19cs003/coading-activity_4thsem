//1.
#include <stdio.h>
int main()
{
    // array declaration 
    int arr[10], arr_size;
    printf("Enter the number of elements \n");
    scanf("%d",&arr_size);
    printf("Enter the array elements \n");
    for(int i=0;i<arr_size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements are \n");
    for(int i=0;i<arr_size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\nThe even numbers in the array are\n");
    for(int i=0;i<arr_size;i++)
    {
        if(arr[i]%2==0)
            printf("%d\t", arr[i]);
    }
    return 0;
}
/*!-------------------------------------------------------------------------------------------------------------------*/
// 2.
#include <stdio.h>
void read_arr();
void print_arr();
void print_odd();
int main()
{
    // array declaration 
    int arr[10], arr_size;
    printf("Enter the number of elements\n");
    scanf("%d", &arr_size);
    read_arr(arr, arr_size);
    printf("\nThe array elements are \n");
    print_arr(arr, arr_size);
    printf("\nThe  odd elements are\n");
    print_odd(arr, arr_size);
}  
void read_arr(int arr[],int arr_size)
{
    printf("Enter the elements\n");
    for(int i=0;i<arr_size;i++)
        scanf("%d",&arr[i]);
}
void print_arr(int arr[],int arr_size)
{
    for(int i=0;i<arr_size;i++)
        printf("%d ",arr[i]);
}
void print_odd(int arr[],int arr_size)
{
    for(int i=0;i<arr_size;i++)
    {
        if(arr[i]%2!=0)
            printf("%d ",arr[i]);
    }
}

/*----------------------------------------------------------------------------------------------------------------------------------------*/
// 3.
#include <stdio.h>
#include<stdlib.h>
//function prototypes 
void read_arr();
void print_arr();
int ret_max();
int main()
{
    // array declaration 
    int arr[10], arr_size;
    printf("Enter the number of elements \n");
    scanf("%d", &arr_size);
    printf("Enter the elements\n");
    read_arr(arr, arr_size);
    printf("The array elements are \n");
    print_arr(arr, arr_size);
    printf("\nThe  maximum element in the arrays is %d\n", ret_max(arr, arr_size));
    return 0;
}  
void read_arr(int arr[],int arr_size)
{
    for(int i=0;i<arr_size;i++)
        scanf("%d",&arr[i]);
}
void print_arr(int arr[],int arr_size)
{
    for(int i=0;i<arr_size;i++)
        printf("%d ",arr[i]);
}
int ret_max(int arr[],int arr_size)
{
    int max=arr[0];
    for(int i=0;i<arr_size;i++)
    {
        if(max<arr[i])
            max=arr[i];
        else
            continue;
    }
    return max;
}

/*---------------------------------------------------------------------------------------------------------------------*/
// 4.
#include<stdio.h>
#include<stdlib.h>
int occurance(int arr[],int arr_size,int store[])
{
    int k=-1,key;
    printf("Enter the element to search\n");
    scanf("%d",&key);
    for(int i=0;i<arr_size;i++)
    {
        if(key==arr[i])
        {
            store[k]=i;
            k++;
        }
        else
            continue;
    }
    return k;
}
void read_arr(int arr[],int arr_size)
{
    for(int i=0;i<arr_size;i++)
        scanf("%d",&arr[i]);
}
void display(int store[],int k)
{
    if(k!=-1)
    {
        printf("Search Successfull\n");
        printf("The first occuracne of the key is %d\n",store[0]);
        printf("The last occuracne of the key is %d\n",store[k-1]);
    }
    else    
        printf("Search Failure\n");
}
int main()
{
    int arr[100],arr_size,k,store[10];
    printf("Enter the number of elements\n");
    scanf("%d",&arr_size);
    printf("Enter the elements\n");
    read_arr(arr, arr_size);
    k=occurance(arr,arr_size,store);
    display(store,k);
}