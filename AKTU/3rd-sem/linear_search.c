//                                            C program for linear search operation
/*  program flow --
    -> Enter an array.
    -> Enter the integer to be searched.
    -> Start searching from 1st to last location in the array using for loop
    -> Save the location at which the element found first and break the loop.
    -> If any location is found then print it , if not then print the "not found" message.
*/
#include<stdio.h>
#define MAX 20
int main()
{
	int a[MAX],i,n,val,pos=-1;
 	printf("Enter the no. of elements\n");            //Entering the array
 	scanf("%d",&n);
 	printf("Enter the elements \n");
 	for(i=0;i<=n-1;i++)
 	{
 		scanf("%d",&a[i]);	
 	}
 	printf("Enter the integer to be searched\n");     // Entering the integer to be searched.
 	scanf("%d",&val);
 	for(i=0;i<=n-1;i++)                               //search elements in loop starting from 1st to last  
 	{
 		if(a[i]==val)                                 // checking the equality condition 
 		{                                             
 			pos=i+1;                                  // save the location & break the loop on 1st match
 			break;
 		}
 	}
 	if(pos==-1)                                       // checking if the position is found or not .
 	{
 		printf("Element does not found");
 	}	
 	else
 	{
 		printf("Element is found at %d position",pos);
 	}
 	return 0;
 }
 /*                       SAMPLE OUTPUT OF THE ABOVE PROGRAM --

Enter the no. of elements
6
Enter the elements 
1
2
3
4
5
6
Enter the integer to be searched
4
Element is found at 4 position

*/
