#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum=0;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
{
	printf("\nEnter Value for 2D Array:");
	scanf("%d",&a[i][j]);
	
}
printf("\n2D Array Elements are:");
for(i=0;i<3;i++)
{
	printf("\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	
{
sum=sum+a[i][j];
}
printf("\nSum of 2D array = %d",sum);

}
}
