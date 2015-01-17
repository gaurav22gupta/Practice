#include <stdio.h>
#include <malloc.h>

typedef struct ll{
	int data;
	struct ll *nxt;
}node;


void ins_at_end(node **head,int no)
{
	node *ptr = *head;

	node *tmp = (node *)malloc(sizeof(node));
	tmp->data = no;
	tmp->nxt = NULL;
	if(*head == NULL)
		*head = tmp;
	else {
		while(ptr->nxt!=NULL)
			ptr = ptr->nxt;
		ptr->nxt = tmp;
	}
	return;
}	


void ins_at_beg(node **head,int no)
{
	node *ptr = *head;

	node *tmp = (node *)malloc(sizeof(node));
	tmp->data = no;
	tmp->nxt = NULL;
	if(*head == NULL)
		*head = tmp;
	else {
		tmp->nxt = *head;
		*head = tmp;
	}
	return;
}	

void ins_at_pos(node **head,int pos,int num)
{
	node *ptr = *head;
	int counter = 1;	
	node *tmp = (node *)malloc(sizeof(node));
	tmp->data = num;
	tmp->nxt = NULL;
	if(!(pos-1))
	{
		ins_at_beg(head,num);
		return;
	}
	else {
		while(counter != (pos-1))
		{
			ptr = ptr->nxt;
			counter++;
		}
		if(!ptr->nxt)
		{
			ins_at_end(head,num);
			return;
		}
		else
		{
			tmp->nxt = ptr->nxt;
			ptr->nxt = tmp;
		}
	}
}	

void del_start_node(node **head)
{
	node *tmp = NULL;
	tmp = *head;
	*head = (*head)->nxt;
	tmp->nxt= NULL;
	free(tmp);
}

void del_end_node(node **head)
{
	node *tmp = NULL;
	node *ptr = *head;

	while(ptr->nxt->nxt != NULL)
		ptr=ptr->nxt;
	tmp = ptr->nxt;
	ptr->nxt = NULL;
	tmp->nxt = NULL;
	free(tmp);
}

void del_at_pos(node **head,int pos)
{
	int count =1;	
	node *tmp = NULL;
	node *ptr = *head;

	while((pos - 1) != count)	
	{	
		if(!(pos -1))
		{
			del_start_node(head);
			return;
		}
		ptr= ptr->nxt;
		count++;
	}	
	if(ptr->nxt->nxt == NULL)
		del_end_node(head);
	else {
		tmp = ptr->nxt;
		ptr->nxt = ptr->nxt->nxt;	
		tmp->nxt = NULL;
		free(tmp);
	}
}


void reverse(node **head)
{
	/*	int arr[10] = {0};
		int top=-1;
		node *ptr = *head;
		while(ptr != NULL)
		{
		arr[++top] = ptr->data;
		ptr = ptr->nxt;
		}
		ptr = *head;
		while(top > -1)
		{
		ptr->data = arr[top--];
		ptr= ptr->nxt;
		}
	 */

	node *prev = NULL;
	node *cur=*head;
	node *next = *head;
	while(next != NULL)
	{
		cur=next;
		next = cur->nxt;
		cur->nxt=prev;
		prev = cur;
		//next = cur->nxt;
	}
	*head = cur;		
}

int main()
{

	int i=0;
	int num =0,pos=0;
	node *start = NULL;
	node *ptr = start;
	for(i=0;i<5;i++)
	{
		printf("enter the number: \n");
		scanf("%d",&num);
		ins_at_end(&start,num);
		//	ins_at_beg(&start,num);
	}

	printf("enter the number to be entered at pos: ");
	scanf("%d",&num);

	printf("\ntell the pos at which to enter num: ");
	scanf("%d",&pos);

	ins_at_pos(&start,pos,num);

	for(ptr=start;ptr!=NULL;ptr=ptr->nxt)
	{
		printf("%d,",ptr->data);	
	}

	printf("\ndeleting starting node...\n");
	del_start_node(&start);

	printf("\ndeleting end node...\n");
	del_end_node(&start);

	for(ptr=start;ptr!=NULL;ptr=ptr->nxt)
	{
		printf("%d,",ptr->data);	
	}

	printf("\ndeleting at position...\n");
	scanf("%d",&pos);

	del_at_pos(&start,pos);

	for(ptr=start;ptr!=NULL;ptr=ptr->nxt)
	{
		printf("%d,",ptr->data);	
	}

	printf("finally reversing the link list...\n");
	reverse(&start);


	for(ptr=start;ptr!=NULL;ptr=ptr->nxt)
	{
		printf("%d,",ptr->data);	
	}

	ptr = start;
	while(ptr != NULL)
	{	
		free(ptr);
		ptr = ptr->nxt;
	}

	return 0;
}         
