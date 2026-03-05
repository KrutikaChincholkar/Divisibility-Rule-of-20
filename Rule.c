#include <stdio.h>

int main() {

    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    int lastDigit = num % 10;
    int lastTwo = num % 100;

    if(lastDigit == 0 && lastTwo % 4 == 0)
        printf("%d is divisible by 20", num);
    else
        printf("%d is not divisible by 20", num);

    return 0;
}
