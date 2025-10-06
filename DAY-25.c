// Q49: Print pattern of numbers starting from i up to 5, with i decreasing from 5

#include <stdio.h>

int main() {
    int i, j;
  
    for(i = 5; i >= 1; i--) {
        for(j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

// Q50: Print right aligned decreasing stars

#include <stdio.h>

int main() {
    int i, j, spaces;
  
    for(i = 5; i >= 1; i--) {
        for(spaces = 0; spaces < 5 - i; spaces++) {
            printf(" ");
        }
        for(j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
