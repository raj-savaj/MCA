#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int num;
	struct node *left,*right;
};
typedef struct node* NODE;
NODE create(NODE root);
void inorder(NODE root);
void preorder(NODE root);
void postorder(NODE root);
void main()
{
	NODE root=NULL;
	int ch;
	clrscr();
	for(;;)
	{
		printf("\n 1. Create Binary Tree");
		printf("\n 2. In-order Traversal");
		printf("\n 3. Pre-order Traversal");
		printf("\n 4. Post-order Traversal");
		printf("\n 5. Exit");
		printf("\n Enter the choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : 
				root=create(root);
				break;
			case 2 : 
				if (root==NULL)
				{
					printf("\n\t Tree is NULL");
				}
				else
				{
					inorder(root);
				}
				break;
			case 3 : 
				if (root==NULL)
				{
					printf("\n\t Tree is null, traversing is not possible");
				}
				else
				{
					preorder(root);
				}
				break;
			case 4 : 
				if (root==NULL)
				{
					printf("\n\t Tree is null, traversing is not possible");
				}
				else
				{
					postorder(root);
				}
				break;
			case 5 :
				exit(0); 
				break;
			default : 
				printf("\n Invalid option");
				break;
		}
	}

}
NODE create(NODE root)
{
	NODE newnode,temp,prev;
	int num;
	newnode=(NODE)malloc(sizeof(struct node));
	printf("\n Enter item to be added to the tree:\n");
	scanf("\n%d",&num);

	newnode->num=num;
	newnode->left=NULL;
	newnode->right=NULL;

	if(root==NULL)
	{
		return newnode;
	}

	temp=root;
	prev=root;

	while(temp!=NULL)
	{
		prev=temp;
		if(num<temp->num)
		{
			temp=temp->left;
		}
		else if(num>temp->num)
		{
			temp=temp->right;
		}
		else
		{
			printf("\n Value already exists");
			return root;
		}
	}

	if(num<prev->num)
	{
		prev->left=newnode;
	}
	else
	{
		prev->right=newnode;
	}
	return root;
}


void inorder(NODE root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d\t",root->num);
		inorder(root->right);
	}

}
void preorder(NODE root)
{
	if(root!=NULL)
	{
		printf("%d\t",root->num);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(NODE root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d\t",root->num);

	}
}
