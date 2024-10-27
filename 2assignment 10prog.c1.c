#include<stdio.h>
#include<conio.h>
void main(){
	int user_name,pass_word;
	printf("\n enter your user_name'admin':");
	scanf("%d",&user_name);
	printf("\n enter your pass_word '1234':");
	scanf("%d", &pass_word);
	if (user_name=='admin'||pass_word=='1234')
{
	printf("login succesfull");
}
else
{
	printf("login failed");
}

	getch();
}
