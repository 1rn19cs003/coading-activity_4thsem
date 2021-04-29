// 1.
#include<stdio.h>
struct book
{
    int book_id;
    char book_title[20];
    char author[10];
    float price;
};
typedef struct book B;
int main()
{
    B a[10];
    int n;
    printf("Enter the number of books\n");
    scanf("%d",&n);
    printf("Enter the values as Book ID,Book Title,Author,Price\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d%s%s%f",&(a[i].book_id),a[i].book_title,a[i].author,&(a[i].price));
    }
    printf("Entered values are\n");
    for(int i=0;i<n;i++)
    {
        printf("%d %s %s %f\n",(a[i].book_id),a[i].book_title,a[i].author,(a[i].price));
    }
}
// 2.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct book
{
    char book_title[20];
    char author[10];
    float price;
    int no_pages;
};
typedef struct book B;
void read_book(B a[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%s%s%f%d",a[i].book_title,a[i].author,&(a[i].price),&(a[i].no_pages));
    }
}
void diplay(B a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%s %s %f %d\n",a[i].book_title,a[i].author,(a[i].price),a[i].no_pages);
    }
}
void search(B a[],int n,char key[])
{
    int price;
    for(int i=0;i<n;i++)
    {
        if(strcmp(a[i].book_title,key))
        {
            printf("Search Sucessfull !\n");
            printf("Enter the new price\n");
            scanf("%d",&price);
            a[i].price=price;
            return;
        }
        else
            printf("Search Unsucessfull !\n");
    }
}
int main()
{
    B a[10];
    int n,ch;
    char key[10];
    printf("Enter the number of books\n");
    scanf("%d",&n);
    printf("Enter the values as Book Title,Author,Price,No of pages\n");
    read_book(a,n);
    while(1)
    {
        printf("Enter the choices\n1.Read\n2.Display\n3.Search\n4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:read_book(a,n+1);
                break;
            case 2:diplay(a,n);
                break;
            case 3:printf("Enter the title to search\n");
                scanf("%s",key);
                search(a,n,key);
                break;
            case 4:exit(0);
            default:printf("Enter a valid choice\n");
        }
    }
}
// 3.
#include <stdio.h>
struct book
{
    char title[10];
    char author[10];
    float price;
    int no_pages;
};

void read(struct book *);
void print(struct book *);

int main()
{
   struct book bk;
   struct book *sptr=&bk;
   read(sptr);
   print(sptr);
   return 0;     
}      
   
 void read(struct book *t) 
{
     printf("Enter the title, author name, price and number of pages in order");
     scanf("%s%s%f%d",(t->title),(t->author),&(t->price),&(t->no_pages));
}

void print(struct book *t) 
{
    printf("The book details are\n");
    printf("\n%s\t%s\t%f\t%d",(t->title),(t->author),(t->price),(t->no_pages)); 
}