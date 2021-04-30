// 1.
#include<stdio.h>
#include<string.h>
#include <stdlib.h> 
void push(int *s,int *rear,int n)
{
	int elem;
	scanf("%d",&elem);
	if(*rear==n-1)
	{
		printf("queue overflow\n");
	}
	(*rear)++;
	s[*rear]=elem;
}
void display(int *s,int front ,int rear)
{
	printf("elem\n");
	for(int i=front;i<=rear;i++)
	{
		printf("%d \n",s[i]);
	}
}
void pop(int *a,int *f,int *r,int *n)
{
    if(*f>*r)
    {
        printf("Queue is in under flow\n");
        return;
    }
    (*f)++;
	(*n)--;
	a=realloc(a,(*n)*sizeof(a));
}
int main()
{
    int n,*s;
	int front=0,rear=-1;
	printf("Enter the length of the array\n");
	scanf("%d",&n);
	s=(int *)malloc(n*sizeof(s));
    while (1)
    {
        int ch;
        printf("Enter the choice\n1.Insert\n2.Delete\n3.Display\n0.Exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            push(s,&rear,n);
            break;
        case 2:pop(s,&front,&rear,&n);
            break;
        case 3:display(s,front,rear);
            break;
        case 0:exit(0);
        default:printf("Enter the value within range\n");
            break;
        }
    }
	return 0;
}

// 2.
#include<stdio.h>
#define MAX 3
void push(int a[],int *top)
{
    int ele;
    if((*top)==MAX){
        a=(int*)realloc(a,MAX*2);
        printf("Size Doubled...\n");
    }
    printf("Enter ele: ");
    scanf("%d",&ele);
    a[++(*top)]=ele;
}

void pop(int a[],int *top)
{
    if((*top)==-1)
    {
        printf("Underflow\n");
        return;
    }
    printf("Popped ele: %d\n",a[(*top)]);
    (*top)--;
}

void display(int a[],int top)
{
    if(top==-1)
        printf("Stack Empty\n");
    for(int i=top;i>=0;i--)
        printf("%d ",a[i]);
}
int main()
{
    int ch,top=-1;
    int *a;
    a=(int*)malloc(sizeof(int)*MAX);
    for(;;)
    {
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push(a,&top); break;
            case 2: pop(a,&top); break;
            case 3: display(a,top); break;
            case 4: return 0;
        }
    }
    return 0;
}
// 3.
#include<stdio.h>
#include<string.h>
#include <stdlib.h> 
void push(int *s,int *rear,int n)
{
	int elem;
	scanf("%d",&elem);
	if(*rear==n-1)
	{
		printf("queue overflow\n");
	}
	(*rear)++;
	s[*rear]=elem;
}
void display(int *s,int front ,int rear)
{
	printf("elem\n");
	for(int i=front;i<=rear;i++)
	{
		printf("%d \n",s[i]);
	}
}
void pop(int *a,int *f,int *r,int *n)
{
    if(*f>*r)
    {
        printf("Queue is in under flow\n");
        return;
    }
    (*f)++;
	(*n)--;
	a=realloc(a,(*n)*sizeof(a));
}
int main()
{
    int n,*s;
	int front=0,rear=-1;
	printf("Enter the length of the array\n");
	scanf("%d",&n);
	s=(int *)malloc(n*sizeof(s));
    while (1)
    {
        int ch;
        printf("Enter the choice\n1.Insert\n2.Delete\n3.Display\n0.Exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            push(s,&rear,n);
            break;
        case 2:pop(s,&front,&rear,&n);
            break;
        case 3:display(s,front,rear);
            break;
        case 0:exit(0);
        default:printf("Enter the value within range\n");
            break;
        }
    }
	return 0;
}
// 4.
#include <stdio.h>
 #include<stdlib.h>
#define SIZE 20
#define TRUE 1 
#define FALSE 0
struct book
{
    int book_id;
    char title[10];
    char author[10];
    float price;
    int no_pages;
};
void push(struct book, int *, struct book[]);
struct book  pop(int *, struct book []);
struct book peep(int , struct book []);
void display(int , struct book []);
int stackfull(int *);
int stackempty(int *);
int stackfull(int *tos)
{
    if((*tos)==SIZE-1)
      return TRUE;
    return FALSE;
}
int stackempty(int *tos)
{
    if((*tos)==-1)
      return TRUE;
    return FALSE;
}

void push(struct book ele, int *tos, struct book stack[])
{
    stack[++(*tos)]=ele;
}

struct book pop(int *tos, struct book stack[])
{
    return stack[(*tos)];
}
struct book peep(int tos,struct book stack[])
{
    return stack[tos];
}

void display(int tos, struct book stack[])
{
   printf("**************\n");
   printf("Bppk_Id\t Title\t Author\t Price\t No_pages\n");
   printf("**************\n");
   for (int i=tos; i>=0; i--)
    {
        printf("%d\t %s\t %s\t %.2f\t %d\n", stack[i].book_id, stack[i].title, stack[i].author, stack[i].price, stack[i].no_pages);
    }
}
int main()
{
    struct book stack[SIZE], ele;
    int  choice, item;
    int top=-1;
    struct book pop_item, peep_item;
    for(;;)
    {
        printf("\tEnter 1 for push, 2 for pop  3 for pip and 4 for display 5 for exit\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: if(stackfull(&top))
                      {
                          printf("The Stack is full\n");
                          break;
                      }
                   printf("Enter the book id title, author name, price and number of pages in order\n");
                    scanf("%d%s%s%f%d", &ele.book_id, ele.title, ele. author, &ele.price, &ele.no_pages);
                    push(ele,&top,stack);
                    break;
             case 2: if (stackempty(&top))
                     {
                          printf(" The stack is empty \n");
                          break;
                     }
                     pop_item=pop(&top, stack);
                     printf("The detailes of popped record are\n");
                     printf("%d\t %s\t %s\t %.2f\t %d\n", pop_item.book_id, pop_item.title, pop_item.author, pop_item.price, pop_item.no_pages);
                     top--;
                     break;       
            case 3: if (stackempty(&top))
                     {
                          printf(" The stack is empty \n");
                          break;
                     }
                     peep_item=peep(top, stack);
                     printf("The item at the top of the stack is\n");
                     printf("%d\t %s\t %s\t %.2f\t %d\n", peep_item.book_id, peep_item.title, peep_item.author, peep_item.price, peep_item.no_pages);
                     break;
            case 4 : if (stackempty(&top))
                     {
                          printf(" The stack is empty \n");
                          break;
                     }
                     printf("The content of the stack are \n");
                     display(top, stack);
                     break;
            case 5:exit(0);
            default: printf("Enter a valid choice\n");
        }
                    
        
    }

    return 0;
}
// 5.
#include<stdio.h>
int largest(int a[],int n)
{
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    return max;
}
void print_rest(int a[],int n,int max)
{
    int i=0;
    printf("Elements before largest:\n");
    while(a[i]!=max)
    {
        printf("%d ",a[i]);
        i++;
    }
    printf("\nElements after largest :\n");
    for(int k=i+1;k<n;k++)
        printf("%d ",a[k]);
}
int main()
{
    int n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int a[n],res,max;
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    res=largest(a,n);
    printf("Maximum element within the given elements %d\n",res);
    print_rest(a,n,res);
}