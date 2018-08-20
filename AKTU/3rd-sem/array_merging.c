//                                       Merging of two arrays in third array in sorted form
/*  program flow --
    -> Enter two different arrays.
    -> Print these arrays.
    -> Sort both the arrays in ascending order.
    -> Arrange the elements of two arrays in third array in sorted form.
    -> Print the final merged & sorted array.
*/
#include<stdio.h>
#define MAX 50
int main()
{
	int a[MAX],b[MAX],c[2*MAX],size1,size2,i,j,k;
	printf("Enter the size of 1st array : ");                //Entering the 1st array
	scanf("%d",&size1);
	printf("Enter the elements of the 1st array :\n");
	for(i=0;i<size1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the size of 2nd array : ");                 //Entering the 2nd array
	scanf("%d",&size2);
	printf("Enter the elements of the 2nd array :\n");
	for(i=0;i<size2;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("So the entered elements  \n in 1st array: ");
	for(i=0;i<size1;i++)
	{
		printf("%d,",a[i]);
	}
	printf("\nin 2nd array: ");
	for(i=0;i<size2;i++)
	{
		printf("%d,",b[i]);
	}
	//                                   Sorting both array in ascending order
	for(i=0;i<size1;i++)                     //sorting of 1st array
	{
		for(j=i+1;j<size1;j++)
		{
			if(a[i]>a[j])
			{
				a[i]=a[i]^a[j];              //swapping using bitwise operator
				a[j]=a[i]^a[j];
				a[i]=a[i]^a[j];
			}
		}
	}
	for(i=0;i<size2;i++)                     //sorting of 2nd array
	{
		for(j=i+1;j<size2;j++)
		{
			if(b[i]>b[j])
			{
				b[i]=b[i]^b[j];              //swapping 
				b[j]=b[i]^b[j];
				b[i]=b[i]^b[j];
			}
		}
	}
	//                               Arranging the elements of two arrays in third array in sorted form.
	i=j=k=0;                               //set all the positions variables to 0
	while((i<size1) && (j<size2))             //arranging & storing elements upto any one array is completely used
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			k++;
			i++;
		}
		else
		{
			c[k]=b[j];
			k++;
			j++;
		}
	}
	//                                    now store the remaining elements of that incompletely used array.
	while(i<size1)
	{
		c[k]=a[i];
		k++;
		i++;
	}
	while(j<size2)
	{
		c[k]=b[j];
		k++;
		j++;
	}
	printf("\nSo the final sorted array is :\n");          //Print the final merged & sorted array.
	for(i=0;i<size1+size2;i++)
	{
		printf("%d,",c[i]);      
	}
	return 0;
}
/*                       SAMPLE OUTPUT OF THE ABOVE PROGRAM --

Enter the size of an array : 6
Enter the elements of the array :
2
3
7
6
5
9
Enter the size of 2nd array : 5
Enter the elements of the 2nd array :
4
12
8
0
1
So the entered elements  
 in 1st array: 2,3,7,6,5,9,
in 2nd array: 4,12,8,0,1,
So the final sorted array is :
0,1,2,3,4,5,6,7,8,9,12,

*/