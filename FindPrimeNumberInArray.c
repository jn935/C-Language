#include<stdio.h>
void main()
{
	int array[100],i= 0 ,num =0,j,counter ;
	
	printf("\nEnter the  size of array");
	scanf("%d",&num);
	printf("\nEnter the elements of array");
	for(i=0;i<=num;i++)
	{
		scanf("%d",&array[i]);
	}
	printf(" Array is -");
     for(i=0;i<=num;i++)
     {
           printf("\t %d",array[i]);
     }
	printf("\n All the prime numbers in inputted array are");
	for(i=0;i<=num;i++)
	{
		counter;
		if(array[i]%2!=0)
		printf("%d\t",array[i]);
	}
	
	}
