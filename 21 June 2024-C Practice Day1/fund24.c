#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:::");
	scanf("%d",&num);
	
	printf("The Result is %s",(num%2==0) ? "Even": "Odd");
}
