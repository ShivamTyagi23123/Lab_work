//Q33 (Loops without Arrays/Strings)Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;
    temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }

    if (sum == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}


//Q34 Write a program to check if a number is prime.

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;
    temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }

    if (sum == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}
