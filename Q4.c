#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("Enter a number:");
	scanf("%d",&b);
	int n=a-b;
	if(n&1)
	printf("Odd Number");
	else
	printf("Even Number");
	return 0;
	
}