#include<stdio.h>
int main(){
	float ci,p,r,t;
	printf("Enter the number:::");
	scanf("%f %f %f",&p,&r,&t);
	ci = pow((1+r/100),t)*p;
	printf("CI is %f",ci);
}
