#include <stdio.h>
#include <string.h>

// Function to perform Run-Length Encoding
void runLengthEncode(const char *input) {
    int count;
    int len = strlen(input);

    printf("Encoded Output: ");
    for (int i = 0; i < len; i++) {
        // Count occurrences of current character
        count = 1;
        while (i < len - 1 && input[i] == input[i + 1]) {
            count++;
            i++;
        }
        // Print character and its count
        printf("%c%d", input[i], count);
    }
    printf("\n");
}

int main() {
    char str[100];

    printf("Enter a string for Run-Length Encoding: ");
    scanf("%s", str);

    runLengthEncode(str);

    return 0;
}