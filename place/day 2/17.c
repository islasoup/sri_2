//check alphabets
#include <stdio.h>
#include <ctype.h>
int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
int isAlphabet(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

int main() {
    char ch;
    
    scanf("%c", &ch);
    if (isAlphabet(ch)) {
        if (isVowel(ch)) {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } else {
        printf("Not an alphabet\n");
    }

    return 0;
}
