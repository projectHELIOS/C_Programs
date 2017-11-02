//                               C program for deletion at given nth position in an Array.
/*  program flow --
    -> Create a default array.
    -> Print that default array.
    -> Take the position of the element to be deleted from the user.
    -> Store that element in a variable( to print later on).
    -> Backward shift the array elements (from pos to last).
    -> Print the deleted element & the final array.
*/
#include<stdio.h>
#define MAX 50
int main()
{
	int a[MAX],size,i,item,pos;
	printf("Enter the size of an array : ");            // for creating the initial default array
	scanf("%d",&size);
	printf("Enter the elements of the array :\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("So the entered elements are : ");
	for(i=0;i<size;i++)                                 //Printing the default array
	{
		printf("%d,",a[i]);
	}
	printf("\nEnter the position for deletion of element: ");    //now the deletion at nth position code begins
	scanf("%d",&pos);
	item = a[pos-1];                                          //storing the deleting element
	for(i=pos-1;i<size;i++)                                  //backward shifting one element (from pos to last)
	{
		a[i]=a[i+1];
	}
	size--;                                              // decrementing size
	printf("The deleted element is : %d",item);       //Printing the deleted element
	printf("\nSo the final array is : ");
	for(i=0;i<size;i++)
	{                                                   //Printing the final array
		printf("%d,",a[i]);
	}

	return 0;
}
/*                       SAMPLE OUTPUT OF THE ABOVE PROGRAM --

Enter the size of an array : 8
Enter the elements of the array :
1
2
3
9
4
5
6
7
So the entered elements are : 1,2,3,9,4,5,6,7,
Enter the position for deletion of element: 4
The deleted element is : 9
So the final array is : 1,2,3,4,5,6,7,
*/