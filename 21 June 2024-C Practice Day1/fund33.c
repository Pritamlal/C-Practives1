#include<stdio.h>
int main()
{
	int ch;
	printf("Enter the characters::");
	scanf("%c",&ch);
	
	if((ch >= 'a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		printf("Alphabets");		
	}
	else
	{
		printf("Not a Alphabets");
	}
}
