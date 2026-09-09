#include <stdio.h>

int square(int num) {
    return num * num;
}

int cube(int num) {
    return num * num * num;
}


int main() {
    int x = square(5);

    printf("%d", x);
}
