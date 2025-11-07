#include <stdio.h>
#include <string.h>

int main() {
    char str[101], words[20][20], temp[20];
    int i = 0, j = 0, k = 0, count = 0;

    // Input the full sentence
    scanf("%[^\n]", str);

    // Split the sentence into words
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            words[count][j++] = str[i];
        } else {
            words[count][j] = '\0';
            count++;
            j = 0;
        }
    }
    words[count][j] = '\0';  // End last word
    count++;

    // Swap first and last words
    strcpy(temp, words[0]);
    strcpy(words[0], words[count - 1]);
    strcpy(words[count - 1], temp);

    // Print updated sentence
    for (k = 0; k < count; k++) {
        printf("%s", words[k]);
        if (k != count - 1)
            printf(" ");
    }

    return 0;
}
