#include<stdio.h>

typedef struct tt{

int data;
struct tt *left;
struct tt *right;
}node;

int arr[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
int r=0,f=0;
node *find_par(node *root, int par)
{
	node *ptr = NULL;
	if(root == NULL)
		return NULL;

	if(root->data == par)
		ptr = root;
	else
	{
		ptr=find_par(root->left,par);
		if(ptr == NULL)
			ptr = find_par(root->right,par);
	}

	return ptr;
}

void insert(node **root, int num,int pos)
{
	int par_pos = 0;
	node *ptr = NULL;
	node *tmp = NULL;
	int par =0;
	tmp = (node *)malloc(sizeof(node));
	tmp->data = num;
	tmp->left=NULL;
	tmp->right=NULL;
	
	if(*root == NULL)
		*root = tmp;
	else
	{
		par_pos = pos/2;
		par = arr[par_pos];		
		ptr= find_par(*root,par);
		if(pos == (par_pos * 2))
		ptr->left = tmp;
		else
		ptr->right = tmp;
	}

return;
}

void find_perimeter(node *root)
{
	if(root==NULL)
		return;
	if(root->left == NULL && root->right == NULL)
		printf("%d ",root->data);
	else
	{
		find_perimeter(root->left);
		find_perimeter(root->right);
	}

return;
}

int main()
{
int i=0;
node *root=NULL;


for(i=0;i<12;i++)
insert(&root,arr[i],i);

find_perimeter(root);

return 0;
}
