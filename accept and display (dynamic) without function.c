#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *a;
    printf("Enter the string\n");
    a=(char *)malloc(1*sizeof(char));
    gets(a);
    printf("%s",a);
}