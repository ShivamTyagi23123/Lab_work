// Q47: Print right-angled triangle pattern of stars

#include <stdio.h>

int main() {
    int i, j;
  
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// Q48: Print incremental numbers pattern

#include <stdio.h>

int main() {
    int i, j;
  
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
