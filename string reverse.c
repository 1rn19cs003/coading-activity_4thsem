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
void rev(char str[])
{
    char rev[1000]={};
  int i, j, count = 0;
  while (str[count] != '\0')
  {
    count++;
  }
  j = count - 1;
  for (i = 0; i < count; i++)
  {
    rev[i] = str[j];
    j--;
  }
  printf("%s ", rev);
}
int main()
{
    char str1[100];
    char res_str[100][100]; 
    int i,j,ctr;
    printf(" Input  a string \n");
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
        rev(res_str[i]);
}