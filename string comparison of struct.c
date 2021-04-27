#include<stdio.h>
#include<string.h>
struct str
{
    char cont[100];        
};
int main()
{
    printf("Enter the two strings\n");
    struct str a[100],b[100];
    int res;
    scanf("%s",a->cont);
    scanf("%s",b->cont);
    res=strcmp(a->cont,b->cont);
    if(res==0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");
}