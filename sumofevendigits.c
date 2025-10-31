#include <stdio.h>
int main() {
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    int ld=0;
    int sum=0
    while(n != 0) {
        ld = n % 10;       // last digit
        if(ld % 2 == 0) {  // check even
            sum = sum + ld;
        }
        n = n / 10;           // remove last digit
    }

    printf("%d", sum);
    return 0;
}
