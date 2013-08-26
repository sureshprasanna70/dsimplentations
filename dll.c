#include<stdio.h>
#include<malloc.h>
struct dol
{
	struct dol *prev;
	int data;
	struct dol *next;
};
typedef struct dol nodes;
nodes *start=NULL;
nodes *curr=NULL;
void create(int a)
{
	nodes *temp=malloc(sizeof(nodes *));
	temp->prev=NULL;
	temp->data=a;
	temp->next=NULL;
	start=curr=temp;
	printf("Created");
}
void insert(int a)
{
	nodes *temp;
	temp=malloc(sizeof(nodes *));
	temp->data=a;
	
	if(start==NULL)
	{
		create(a);
	}
	else
	{
		temp->prev=curr;
		curr->next=temp;
		temp->next=NULL;
		curr=temp;
		printf("INSER");
	}

}
void show()
{
	nodes *temp;
	temp=start;
	while(temp!=NULL)
	{
	printf("%d\n",temp->data);
	temp=temp->next;
	}
	
	
}
int main()
{
	create(5);
	insert(2);
	insert(3);
	insert(31);
	show();
}

