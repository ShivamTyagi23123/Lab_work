// Q85: Reverse a string

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j;
  
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0' && str[i] != '\n') i++;
    for(j = i - 1; j >= 0; j--) printf("%c", str[j]);
    printf("\n");
    return 0;
}

// Q86: Check if a string is a palindrome

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j;
    int isPalindrome = 1;
  
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0' && str[i] != '\n') i++;
    i--;
    for(j = 0; j < i; j++, i--) {
        if(str[j] != str[i]) {
            isPalindrome = 0;
            break;
        }
    }
    if(isPalindrome) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}
