#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int min = 1;
    int max = 100;
    int randomnum = (rand() % (max - min + 1)) + min;
    int number = 0;

    printf("%d\n", randomnum);

    do{
        printf("Try to guess the correct number between 1 and 100: ");
        scanf("%d", &number);
        if (number > randomnum) {
            printf("the random number is less than %d\n", number);
        }
        if (number < randomnum){
            printf("the random number is higher than %d\n", number);
        }
    }while(number != randomnum);
    printf("Correct number guessed!");
    return 0;
}