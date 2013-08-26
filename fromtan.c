#include<stdio.h>
#include<malloc.h>
struct link 
{
	int no;
	struct link *next;
};
typedef struct link nodes;
nodes *head=NULL;
nodes *curr=NULL;
void create(int a)
{
	nodes *temp=malloc(sizeof(nodes *));
	temp->no=a;
	temp->next=0;
	head=curr=temp;
}
void add(int b)
{
	nodes *temp=malloc(sizeof(nodes *));
	temp->no=b;
	temp->next=0;
	if(NULL==head)
	{
		//printf("creating nodes");
		create(b);
	}
	else
	{
	curr->next=temp;
	curr=temp;
	//printf("created");
	}
}
void add_between(int a1,int b)
{
	nodes *ptr=head;
	int i=1;
	while(ptr!=0)
	{
		ptr=ptr->next;
	}
	add(b);
}
void del_node(int a)
{
	nodes *temp;
	temp=head;
	printf("Second node:%d",temp->next->no);
	while(temp->next->no!=a)
	{
		printf("%d",temp->no);
		temp=temp->next;
	}
}
void show_list()
{
	nodes *ptr=head;
	printf("\nprinting the contents of the list\n");
	while(ptr!=0)
	{
		printf("%d\n",ptr->no);
		ptr=ptr->next;
	}
}
int main()
{
	int i=0,bw=0;
	printf("Enter a value to create link list");
	scanf("%d",&i);
	add(i);
	printf("Enter value to be added the list and number after which the the value\nshould be inserted seperated by newline characater");
	scanf("%d\n%d",&bw,&i);
	add_between(i,bw);
	show_list();
	del_node(2);
	show_list();
	return 0;
}
