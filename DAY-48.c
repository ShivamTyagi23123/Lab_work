// Q95: Check if one string is rotation of another

#include <stdio.h>

int length(char s[]) {
    int i = 0;
    while(s[i] != '\0' && s[i] != '\n') i++;
    return i;
}

int isRotation(char s1[], char s2[]) {
    int len1 = length(s1);
    int len2 = length(s2);
    if(len1 != len2) return 0;
    
    for(int i = 0; i < len1; i++) {
        int j, k;
        for(j = 0; j < len1; j++) {
            k = (i + j) % len1;
            if(s1[k] != s2[j]) break;
        }
        if(j == len1) return 1;
    }
    return 0;
}

int main() {
    char s1[100], s2[100];
    int i = 0;
    char ch;
    while((ch = getchar()) != '\n' && ch != EOF) { s1[i++] = ch; }
    s1[i] = '\0';
    i = 0;
    while((ch = getchar()) != '\n' && ch != EOF) { s2[i++] = ch; }
    s2[i] = '\0';

    if(isRotation(s1, s2)) printf("Rotation\n");
    else printf("Not rotation\n");
    return 0;
}

// Q96: Reverse each word in a sentence without changing the word order

#include <stdio.h>

void reverse(char s[], int start, int end) {
    char temp;
    while(start < end) {
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i = 0, start = 0;
    char ch;
    while((ch = getchar()) != '\n' && ch != EOF) {
        str[i++] = ch;
    }
    str[i] = '\0';

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            reverse(str, start, i - 1);
            start = i + 1;
        }
    }
    reverse(str, start, i - 1);

    printf("%s\n", str);
    return 0;
}
