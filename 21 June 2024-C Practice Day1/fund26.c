#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the characters::");
	scanf("%c",&ch);
	
	((ch >= 'a' && ch <='z') || (ch>='A' && ch<='Z')) ? printf("Alphabet"):printf("Not Alphabet");
}
