#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    
    int count = 0; // fixed
    
    while(n != 0) {
        n = n / 10;
        count++;
    }

    printf("%d", count);
    return 0;
}
