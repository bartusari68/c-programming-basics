#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("\nResults:\n");
    printf("Number: %d\n", number);

    if (number % 2 == 0) {
        printf("Type: Even\n");
    } else {
        printf("Type: Odd\n");
    }

    if (number > 0) {
        printf("Sign: Positive\n");
    } else if (number < 0) {
        printf("Sign: Negative\n");
    } else {
        printf("Sign: Zero\n");
    }

    printf("Square: %d\n", number * number);

    return 0;
}
