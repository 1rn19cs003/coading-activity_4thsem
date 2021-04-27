#include<stdio.h>
#include<stdlib.h>
char * read_str(char *a)
{
    a=(char *)malloc(1*sizeof(char));
    gets(a);
}
int main()
{
    char *a,*b;
    printf("Enter the string\n");
    b=read_str(a);
    printf("%s",b);
}