#include <stdio.h>
#include <conio.h>

int main() {
    int quantity;
    float rate, total;
    float discount;

    printf("Enter rate and quantity: ");
    scanf("%f %d", &rate, &quantity);

    if (quantity > 999) {
        discount = (quantity * rate) * 0.20;
    } else if (quantity > 0) {
        discount = (quantity * rate) * 0.10;
    } else {
        discount = 0;
    }

    total = (rate * quantity) -discount;
    printf("Total paid is Rs %.2f\n", total);
    getch();
}
