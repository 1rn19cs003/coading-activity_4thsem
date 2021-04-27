#include <stdio.h>
#include <string.h>
int len(char *a)
{
    int count=0,i=0;
    while(a[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}
int main()
{
    char str1[100];
    char res_str[10][10]; 
    int i,j,ctr;
    printf(" Input  a string ");
    gets(str1);
    j=0; ctr=0;
    for(i=0;i<=(len(str1));i++)
    {
        if(str1[i]==' '||str1[i]=='\0')
        {
            res_str[ctr][j]='\0';
            ctr++; 
            j=0;
        }
        else
        {
            res_str[ctr][j]=str1[i];
            j++;
        }
    }
    printf("\n Strings after split by space are \n");
    for(i=0;i < ctr;i++)
        printf(" %s\n",res_str[i]);
    return 0;
}