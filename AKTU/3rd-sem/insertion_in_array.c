//c program for insertion at given nth position in an Array.
#include<stdio.h>
int main()
{
	int a[10],size,i,item,pos;
	printf("Enter the size of an array : ");
	scanf("%d",&size);
	printf("\nEnter the elements of the array :\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nSo the entered elements are : ");
	for(i=0;i<size;i++)
	{
		printf("%d,",a[i]);
	}
	printf("\nEnter the position for insertion of element: ");
	scanf("%d",&pos);
	printf("Enter the element to be inserted : ");
	scanf("%d",&item);

	//forward shifting one element from pos to last
	for(i=size-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=item;             // inserting element 
	size++;                    // incrementing size
	printf("So the final array is : ");
	for(i=0;i<size;i++)
	{
		printf("%d,",a[i]);
	}

	return 0;
} 