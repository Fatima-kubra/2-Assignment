#include<stdio.h>
#include<conio.h>
int main(){
    int age;
    printf("Enter person age");
    scanf("%d",&age);
    if(age>18)
        printf("person is adult");
    else
        printf("person is not adult");
    return 0;
}