#include<stdio.h>
#include<conio.h>
void main(){
	int x;
	printf("enter any year: ");
	scanf("%d",&x);
	if(x%400==0 || x%4==0 && x%100!=0)
	{
		printf("year is leapyear");
	}
	else
	{
		printf("year is not leapyear");
	}
	getch();
}

