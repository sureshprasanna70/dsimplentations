/*This program is to count the occurunces of a given integer
 * in a linked list*/
#include<stdio.h>
#include<malloc.h>
struct counter
{
	int no;
	struct counter *next;
};
typedef struct counter teller;
teller *head=NULL;
teller *curr=NULL;
int count(int a)
{
	int countn=0;
	teller *temp=malloc(sizeof(teller *));
	temp=head;
	
	while(temp!=NULL)
	{
		if(temp->no==a)
		{
		
			countn++;

		}
	
	temp=temp->next;
	}
	return countn;
}
void create_list(int a)
{
	teller *temp=malloc(sizeof(teller *));
	temp->no=a;
	temp->next=NULL;
	head=curr=temp;
}
void add_to_list(int a)
{
	teller *temp=malloc(sizeof(teller *));
	temp->no=a;
	temp->next=NULL;
	
	if(head==NULL)
	{
		printf("creating head");
		create_list(a);
	}
	else
	{
		printf("creating chain nodes");
		curr->next=temp;
		curr=temp;
	}
	
}
void show_list()
{
	teller *temp=malloc(sizeof(teller *));
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->no);
		temp=temp->next;
	}
}
void del_node( int a)
{
	teller *temp=head;
	while(temp->next->no!=a)
	{
		printf("Inside %d",temp->no);
		temp=temp->next;
	}
	temp->no=temp->next->no;
	temp->next=temp->next->next;
}

int main()
{
	int n=0,i=0,tot=0,count_teller=0,temp=0;
	//curr=malloc(sizeof(teller *));
	//create_list(5);
	printf("Enter no of node to be created");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		
		printf("\nEnter values:");
		scanf("%d",&temp);
		add_to_list(temp);
	}
	show_list();
	scanf("%d",&count_teller);
	tot=count(count_teller);
	printf("Found %d times\n",tot);
	del_node(2);
	show_list();

}
