#include<stdio.h>
#include<conio.h>
void main (){
	float temperature;
	char conversionType;
	printf("enter 'C'for celsius to fahrenheit or 'F'for fahrenheit to celsius:");
	scanf("%c",&conversionType);
	printf("enter temperature value:");
	scanf("%f",&temperature);
	if(conversionType=='C'||conversionType=='c')
	{
		float fahrenheit = (temperature*9/5)+32;
		printf("%2f Celsius is equal to %.2f fahrenheit.\n",temperature,fahrenheit);
	}
	else if (conversionType=='F'||conversionType=='f')
	{
		float celsius= (temperature-32)*5/9.0;
		printf("%2f fahrenheit is equal to %.2f celsius.\n",temperature,celsius);
	}
	else
	{
		printf("error: invalid conversion type!\n");
	}
	getch();
}
