#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("what item you would like to buy?:\n");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price for each?\n");
    scanf("%f", &price);

    printf("How many would you like?\n");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("your total for the item %s is: %c %.2f\n", item, currency, total);


    return 0;
}
