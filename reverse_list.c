#include <stdio.h>
#include <malloc.h>

typedef struct ll{
int data;
struct ll *nxt;
}node;

void insert(node **head,int n)
{
	node *tmp = (node *)malloc(sizeof(node));
	tmp->data = n;
	tmp->nxt = NULL;

	if(*head==NULL)
	{
		*head = tmp;
	}
	else
	{
		tmp->nxt = *head;
		*head = tmp;
	}

return;
}

void rev(node **head)
{
	node *cur = *head;
	node *prev= NULL;
	node *fwd = NULL;
	while(cur!=NULL)
	{
		fwd = cur->nxt;
		cur->nxt = prev;
		prev = cur;
		cur =fwd;
	}
	*head = prev;

return;
}

int main()
{
node *start=NULL;
node *ptr=NULL;

insert(&start,10);
insert(&start,14);
insert(&start,1);
insert(&start,3);
insert(&start,20);
insert(&start,5);
for(ptr=start;ptr!=NULL;ptr=ptr->nxt)
{	
	printf("%d ",ptr->data);
}

printf("\n*****************************\n");
rev(&start);

for(ptr=start;ptr!=NULL;ptr=ptr->nxt)
{	
	printf("%d ",ptr->data);
}
return 0;
}
