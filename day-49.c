//Q95: Check if one string is a rotation of another

#include <stdio.h>
#include <stdlib.h>
int strlen_custom(char *s);
int is_substring(char *s, char *sub);

int is_rotation(char *s1, char *s2) {
    int len1 = strlen_custom(s1);
    int len2 = strlen_custom(s2);
    if (len1 != len2) return 0;

    char *temp = (char *)malloc(len1 * 2 + 1);
    for (int i = 0; i < len1; i++) {
        temp[i] = s1[i];
        temp[i + len1] = s1[i];
    }
    temp[len1 * 2] = '\0';

    int result = is_substring(temp, s2);
    free(temp);
    return result;
}

int main() {
    char s1[] = "abcde";
    char s2[] = "cdeab";
    printf(is_rotation(s1, s2) ? "True\n" : "False\n");
    return 0;
}


//Q96: Reverse each word in a sentence without changing word order

#include <stdio.h>
#include <stdlib.h>

void reverse(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

void reverse_each_word(char *sentence) {
    char *word_start = NULL;
    char *temp = sentence;
    while (*temp) {
        if (!word_start && *temp != ' ')
            word_start = temp;
        if (word_start && (*(temp+1) == ' ' || *(temp+1) == '\0')) {
            reverse(word_start, temp);
            word_start = NULL;
        }
        temp++;
    }
}

int main() {
    char sentence[] = "hello world";
    reverse_each_word(sentence);
    printf("%s\n", sentence);
    return 0;
}
