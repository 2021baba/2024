#include <stdio.h>

int main() {
    long long num, reversed = 0; 
    scanf("%lld", &num); 

    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;  
    }

    printf("%lld\n", reversed);

    return 0;
}
