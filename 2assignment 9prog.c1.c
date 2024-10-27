#include<stdio.h>
#include<conio.h>
void main(){
	float principle, rate, time, simple_intrest;
	printf("enter the principle amount = ");
	scanf("%f",&principle);
    printf("enter the rate interest = ");
	scanf("%f",&rate);
	printf("enter the time duration = ");
	scanf("%f",&time);
	simple_intrest= (principle*rate*time)/100;
	printf("the simple intrest is %f", simple_intrest);
	getch();
}
