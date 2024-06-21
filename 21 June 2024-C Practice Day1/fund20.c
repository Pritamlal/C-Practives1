#include<stdio.h>
int main(){
	int num;
	printf("Enter the number::");
	scanf("%d",&num);
	if(num&1)
	printf("Bit is 1");
	else
	printf("Bit is 0");
	return 0;
}
