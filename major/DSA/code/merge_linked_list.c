#include<stdio.h>
#include<stdlib.h>
typedef struct ll
{
	int data;
	struct ll *link;
}node;
node *h1 = NULL,*h2 = NULL;
void add();
void add1();
void merge(node *,node *);
void display(node *);
void main()
{
	int n,m;
	printf("Enter how many nodes for 1st linked list : ");
	scanf("%d",&n);
	printf("Enter how many nodes for 2nd linked list : ");
	scanf("%d",&m);
	int i;
	printf("It is 1st linked list\n");
	for(i = 0;i < n;i++)
	{
		add();
	}
	display(h1);
	printf("\nIt is 2nd linked list\n");
	for(i = 0;i < m;i++)
	{
		add1();
	}
	display(h2);
	int choice;
	printf("\nEnter merge format h1->h2 or h2->h1 : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			merge(h1,h2);
			display(h1);
			break;
		case 2:
			merge(h2,h1);
			display(h2);
			break;
	}
}

void add()
{
	node* temp,*t1 = (node *)malloc(sizeof(node));
	int data;
	printf("Enter the data part : ");
	scanf("%d",&data);
	t1 -> data = data;
	t1 -> link = NULL;
	if(h1 == NULL)
	{
		h1 = t1;
	}
	else
	{
		temp = h1;
		while(temp -> link != NULL)
		{
			temp = temp -> link;
		}
		temp -> link = t1;
	}
}

void add1()
{
	node* temp,*t1 = (node *)malloc(sizeof(node));
	int data;
	printf("Enter the data part : ");
	scanf("%d",&data);
	t1 -> data = data;
	t1 -> link = NULL;
	if(h2 == NULL)
	{
		h2 = t1;
	}
	else
	{
		temp = h2;
		while(temp -> link != NULL)
		{
			temp = temp -> link;
		}
		temp -> link = t1;
	}
}

void merge(node *a,node *b)
{
	node *temp;
	temp = a;
	while(temp -> link != NULL)
	{
		temp = temp -> link;
	}
	temp -> link = b;
}

void display(node *head)
{
	node *temp = head;
	printf("The linked list is :  ");
	while(temp != NULL)
	{
		printf("%d  ",temp -> data);
		temp = temp -> link;
	}
}