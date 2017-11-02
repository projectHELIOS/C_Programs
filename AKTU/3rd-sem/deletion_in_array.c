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
	printf("\nEnter the position for deletion of element: ");
	scanf("%d",&pos);
	item = a[pos-1];             //storing the deleting element

	//backward shifting one element from pos to last
	for(i=pos-1;i<size;i++)
	{
		a[i]=a[i+1];
	}

	size--;                    // decrementing size
	printf("The deleted element is : %d\n",item);
	printf("\nSo the final array is : ");
	for(i=0;i<size;i++)
	{
		printf("%d,",a[i]);
	}

	return 0;
}