#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0, rev = 0;

    scanf("%d", &n);
    temp = n;  // store original number

    while (n != 0) {
        digit = n % 10;     // get last digit
        sum = sum + digit;  // add to sum
        rev = rev * 10 + digit; // make reverse
        n = n / 10;        // remove last digit
    }

    printf("Sum of digits = %d\n", sum);
    printf("Reverse = %d\n", rev);

    return 0;
}
