#include<stdio.h>
int main()
{
	int num1,num2,max;
	printf("Enter the num1 and num2::");
	scanf("%d %d",&num1,&num2);
	
	max = (num1>num2)?num1:num2;
	
	printf("Max is %d",max);
	
}
