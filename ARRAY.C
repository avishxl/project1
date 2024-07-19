#include<stdio.h>

int main()
    {
	int arr[5],i,sum=0;
	printf("Enter array Elements\n");
	for(i=0; i<5; i++)
	{
	scanf("%d",&arr[i]);
	 }
	for (i=0; i<5; i++)
	{
	sum=sum+arr[i];
	 }
	printf("Sum of the Array=%d\n", sum);
	getch();
	return 0;
    }