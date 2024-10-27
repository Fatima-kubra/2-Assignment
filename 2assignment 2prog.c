#include<stdio.h>
#include<conio.h>
int main(){
    int number;
    printf("Enter the number");
    scanf("%d",&number);
    if (number%2==0)
        printf("even");
    else
        printf("odd");
    return 0;
}