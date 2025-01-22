#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    bool palindrome = false;
    char sentence[80] = "";
    char alphaSentence[80] = "";

    int length = strlen(sentence);
    fgets(sentence, 80, stdin);

    int j = 0;
    for (int i = 0; i < strlen(sentence) - 1; i++) {
        if (isalpha(sentence[i])) {
            alphaSentence[j] = sentence[i];
            j++;
        }
    }

    int g = 0;
    int h = 0;

    for (int i = 1; i < strlen(alphaSentence); i++) {
        if (tolower(alphaSentence[h]) == tolower(alphaSentence[i]) || tolower(alphaSentence[g]) == tolower(alphaSentence[i])) {
            palindrome = true;
        }
        g = h;
        h = i;
    }
    if (strlen(alphaSentence) <= 1) {
        printf("Palindrome");
    } else {
        switch (palindrome) {
            case true:
                printf("Palindrome");
                break;
            case false:
                printf("Anti-Palindrome");
                break;
        }
    }
}
