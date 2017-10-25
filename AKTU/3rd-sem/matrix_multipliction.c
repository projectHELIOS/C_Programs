
// Program to multiply two matrix in c

#include<stdio.h>
#include <stdlib.h>

int main()
{
	int m,n,p,q,mat1[100][100],mat2[100][100],mul_mat[100][100],sum=0,i,j,k;
	system("clear");
	printf("----------------- Enter the Flowing data -----------------\n");
	// This for taking order of matrices
	printf("     Order of 1st matrix(m n) max (100 100): ");
	scanf("%d%d",&m,&n);
	printf("     Order of 2st matrix(p q) max (100 100): ");
	scanf("%d%d",&p,&q);
	//This for checking the addition condition
	if (n!=p)
	{
		printf("------------- Multiplication is not possible -------------\n");
		printf("----------------------------------------------------------\n");
	}
	else{
		//Taking input of 1st mat.
		printf("-------- Elements of matrix 1st -------\n");
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				printf("    Element (%d %d): ",i,j);
				scanf("%d",&mat1[i][j]);
			}
		}
		//Taking input of 2st mat.
		printf("---------------------------------------\n");
		printf("-------- Elements of matrix 2nd -------\n");
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				printf("    Element (%d %d): ",i,j);
				scanf("%d",&mat2[i][j]);
			}
		}
		system("clear");
		printf("------------- You are enterd the flowing data ------------\n");
		// Printing the matrix 1
		printf("--------- Matrix 1 ---------\n");
		for (i = 0; i < m; i++)
		{
			printf("     ");
			for (j = 0; j < n; j++)
			{
				printf("%d ",mat1[i][j]);
			}
			printf("\n");
		}
		printf("----------------------------\n");
		// Printing the matrix 2
		printf("--------- Matrix 2 ---------\n");
		for (i = 0; i < m; i++)
		{
			printf("     ");
			for (j = 0; j < n; j++)
			{
				printf("%d ",mat2[i][j]);
			}
			printf("\n");
		}
		printf("----------------------------\n");
		// For calculating multiplication matrix
		for (i = 0; i < m; i++) 
		{
           for (j = 0; j < q; j++) 
           {
		        for (k = 0; k < p; k++) {
		          sum =sum + mat1[i][k]*mat2[k][j];
		        }
                mul_mat[i][j] = sum;
                sum = 0;
            }
        }
		// For printing multiplied matrix
		printf("-------- Mutiplication of both--------\n");
		for (i = 0; i < m; i++)
		{
			printf("     ");
			for (j = 0; j < q; j++)
			{
				printf("%d ",mul_mat[i][j]);
			}
			printf("\n");
		}
		printf("--------------------------------------\n");
		printf("----------------------------------------------------------\n");
	}
	return 0;
}