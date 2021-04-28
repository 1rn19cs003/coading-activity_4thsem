// ASCII
#include<stdio.h>
int main()
{
    char var;
    printf("Enter the number\n");
    scanf("%c",&var);
    printf("ASCII value of %c is %d",var,var);
}
// max occured
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
    char str1[100],max[100];
    char res_str[50][50]; 
    int i,j,ctr;
    printf(" Input  a string\n");
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
    printf("----------------------------------------------\n");
    for(int j=0;j<ctr;j++)
    {
        int count=0;
        strcpy(max,res_str[j]);
        for(int i=0;i<ctr;i++)
        {
            if(strcmp(max,res_str[i]))
                count++;
                if(count>=1)
                    j++;
        }
        if(count>=1)
            printf("%s ",max);
        else
            continue;
    }
}
// word count
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
    printf(" Input  a string\n");
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
    printf("\nTotal number of the words is\n");
    printf("%d",ctr);
    return 0;
}
// number game
#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

int main()
{
    char s[100];
    int max=0,min=1000000;
    while(gets(s))
    {
        int c=0;
        if(strcmp(s,"done")==0)
        break;
        for(int i=0;i<strlen(s);i++)
        {
            if(!isdigit(s[i]))
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            int x=atoi(s);
            if(x>max)
            max=x;
            if(x<min)
            min=x;
        }
    }
    printf("Maximum: %d\nMinimum: %d",max,min);
}