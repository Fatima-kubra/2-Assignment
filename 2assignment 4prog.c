#include<stdio.h>
#include<conio.h>
int main(){ 
float num2, num4, num6;
 printf("Enter first number"); 
  scanf("%f",&num2);
  printf("Enter second number"); 
  scanf("%f",&num4); 
  printf("Enter third number");
   scanf("%f",&num6); 
  if(num2>= num4)
   if(num2>=num6)

printf("%f is the largest num", num2);

else

printf("%f is the largest num", num6);

if(num4>=num6)

printf("%f is the largest num", num4);

else

printf("%f is the largest num",num6);

return 0;
}
