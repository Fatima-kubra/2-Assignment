#include<stdio.h>
#include<conio.h>
int main (){
	float marks1, marks2, marks3, averge;
	printf("enter the marks for subject 1:");
	scanf("%f", &marks1);
		printf("enter the marks for subject 2:");
	scanf("%f", &marks2);
		printf("enter the marks for subject 3:");
	scanf("%f", &marks3);
	if (averge >=90){
		printf("grade A");
	}
	else if (averge >= 80){
	printf("grade B");
	}
	else if (averge >= 60){
		printf("grade D");
	}
	else {
		printf("fail grade F");
	}
	getch();
}
