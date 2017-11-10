/*
   program to enter node in linked list in ascending order in c
*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
   int data;
   struct node  *next,*priv; 	
}*root = NULL;


//Function to add new node at it corect position

void addAsc()
{
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	printf("Enter the data :");
	scanf("%d",&temp->data);
	temp->next = NULL;
	temp->priv = NULL;
	if (root == NULL)
	{
		root =  temp;
	}
	else{
		struct node *temp1 = root;
		while((temp->data >=temp1->data))
		{
				temp1=temp1->next;
				if (temp1==NULL)
				{
					break;
				}
		}
		if (temp1==NULL && root !=NULL)
		{
			temp1 = root;
			while(temp1->next != NULL)
			{
				temp1 = temp1->next;
			}
			temp->priv = temp1;
			temp1->next = temp;
		}
		else if(temp1 == root)
		{
			temp->next = root;
			temp1->priv = temp;
			root = temp;
		}
		else
		{
		    temp->next = temp1;
		    temp->priv = temp1->priv;
		    temp1->priv->next =temp;
		    temp1->priv = temp;			
		}
	}
}

//End

//Function to display

void display()
{
	struct node *temp=root;
	while(temp !=NULL)
	{
		printf("%d  ",temp->data);
		temp = temp->next;
	}
}

//End 

//Main

int main()
{
	char ch;
	int len = 0;
	do
	{
		printf("\n____________________________________________________________________\n");
		addAsc();
		printf("____________________________________________________________________\n");
		printf("\nYou want to create more node or not [Y/N]:");
		scanf("%s",&ch);
		printf("____________________________________________________________________\n");
	}while(ch == 'Y' || ch == 'y');
	printf("\nEntered list are:\n");
	display();
	printf("\n");
	printf("____________________________________________________________________\n");

}

//End