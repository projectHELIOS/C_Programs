//merging of two arrays in third array in sorted form
#include<stdio.h>
int main()
{
	int a[10],b[10],c[20],size1,size2,i,j,k;
	printf("Enter the size of an array : ");
	scanf("%d",&size1);
	printf("\nEnter the elements of the array :\n");
	for(i=0;i<size1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nSo the entered elements are : ");
			printf("\nEnter the size of 2nd array : ");
	scanf("%d",&size2);
	printf("\nEnter the elements of the 2nd array :\n");
	for(i=0;i<size2;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\nSo the entered elements  \n in 1st array: ");
	for(i=0;i<size1;i++)
	{
		printf("%d,",a[i]);
	}
	printf("\nin 2nd array: ");
	for(i=0;i<size2;i++)
	{
		printf("%d,",b[i]);
	}
	//sorting both array in ascending order
	for(i=0;i<size1;i++)                     //sorting of 1st array
	{
		for(j=i+1;j<size1;j++)
		{
			if(a[i]>a[j])
			{
				a[i]=a[i]^a[j];              //swapping 
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
	i=j=k=0;
	while((i<size1) && (j<size2))
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
	printf("\nSo the final sorted array is :\n");
	for(i=0;i<size1+size2;i++)
	{
		printf("%d,",c[i]);
	}

	return 0;
}