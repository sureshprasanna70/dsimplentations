/*This program finds the number at the nth positon.The position count from zero similar to array index*/
#include<stdio.h>
#include<malloc.h>
struct nget
{
	int n;
	struct nget *node;
};
typedef struct nget prob2;
prob2 *head=NULL;
prob3 *curr=NULL;
int main()
{
head=malloc(sizeof(prob2 *));
create_list();
add_to_list();

