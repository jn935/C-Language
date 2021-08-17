#include<stdio.h>
main()
{
int arr[20]={0};
float average=0;
int num = 0;
int sum=0;
int i = 0;
printf("Enter the size of the array");
scanf("%d",&num);
printf("Enter the elements of array");
for(i=0;i<num;i++){

scanf("%d",&arr[i]);

}
printf("\narray elements are");
for(i=0;i<num;i++){

printf("\n %d",arr[i]);
}
for(i=0;i<num;i++){
sum += arr[i];
printf("%d",sum);

}
average = sum /num ;
    printf("\nAverage = %.2f", average);
    return 0;

}
