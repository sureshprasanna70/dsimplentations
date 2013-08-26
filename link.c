#include<stdio.h>
#include<malloc.h>
struct node 
{
	int no;
	struct node *link;
}*head,*curr;

typedef struct node linker;

void create(int a)
{
	linker *temp=malloc(sizeof(linker *));
	temp->no=a;
	temp->link=0;
	head=temp;
	printf("CREATED");
}
void add(int a)
{
	linker *temp1=malloc(sizeof(linker *));
	linker *q;
	temp1->no=a;
	temp1->link=0;
	if(head==NULL)
	{
		head=temp1;
	}
	for(q=head;q!=0;q=q->link);
	/*while(temp1!=0)
	{
		printf("%d",temp1->no);
		temp1=temp1->link;
	}
	temp1->no=a;
	temp1->link=0;
	curr->link=temp1;
	head->link=temp1;*/
	q->link=temp1;
	printf("created");	
	
	
}

void show_list()
{
	linker *temp=malloc(sizeof(linker *));
	int i=1;
	temp=head;
	while(temp!=0)
	{
		printf("%d",temp->no);
		temp=temp->link;
		i++;
	}
}
int main()
{
	head=malloc(sizeof(linker *));
	curr=malloc(sizeof(linker *));
	create(5);
	show_list();
        add(6);
	add(7);
	//show_list();
	return 0;
}
	

