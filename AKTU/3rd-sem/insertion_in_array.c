//                               C program for insertion at given nth position in an Array.
/*  program flow --
    -> Create a default array.
    -> Print that default array.
    -> Take the position & item from the user.
    -> Forward shift the array elements (from pos to last)
    -> Then insert the item at given position in the array.
    -> Print the final array.
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
	for(i=0;i<size;i++)                                 //printing the default array
	{
		printf("%d,",a[i]);
	}
	printf("\nEnter the position for insertion of element: ");    //now the insertion at nth pos code begins
	scanf("%d",&pos);
	printf("Enter the element to be inserted : ");
	scanf("%d",&item);
	for(i=size-1;i>=pos-1;i--)                  //forward shifting array elements (from pos to last)
	{
		a[i+1]=a[i];
	}
	size++;                    // incrementing size
	a[pos-1]=item;             // inserting element at given position
	printf("So the final array is : ");
	for(i=0;i<size;i++)
	{                                                   //Printing the final array
		printf("%d,",a[i]);
	}
	return 0;
} 
/*                       SAMPLE OUTPUT OF THE ABOVE PROGRAM --
Enter the size of an array : 6
Enter the elements of the array :
1
2
3
5
6
7
So the entered elements are : 1,2,3,5,6,7,
Enter the position for insertion of element: 4
Enter the element to be inserted : 4
So the final array is : 1,2,3,4,5,6,7,

*/
