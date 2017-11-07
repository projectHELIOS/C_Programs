/*c program for linear search operation*/
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
 int a[20],i,n,val,pos=-1;
 printf("Enter the no. of elements\n");
 scanf("%d",&n);
 printf("Enter the elements \n");
 for(i=0;i<=n-1;i++)
 scanf("%d",&a[i]);
 printf("Enter the integer to be searched\n");
 scanf("%d",&val);
 for(i=0;i<=n-1;i++)
 {
 if(a[i]==val)
 {
 pos=i+1;
 break;
 }
 }
 if(pos==-1)
 printf("Element does not found");
 else
 printf("Element is found at %d position",pos);
 return 0;
 }
