#include<stdio.h>
#define pi 3.14
int main(){
	int r;
	printf("Enter the number::");
	scanf("%d",&r);
	printf("Area:%d\n",r*r);
	printf("Perimeter:%f\n",(2*(pi)*r));
	printf("Circumference:%d",2*r*r);
}
