//program for giving a string find the longest sub string which has no repetation charcters and contains atleast 1 digit
#include <stdio.h>
#include <string.h>
int isValid(char str[], int start, int end) {
    int charSet[256] = {0};
    int digitFound = 0;

    for (int i = start; i <= end; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            digitFound = 1;
        }
        if (charSet[(unsigned char)str[i]] == 1) {
            return 0; // Repetition found
        }
        charSet[(unsigned char)str[i]] = 1;
    }
    return digitFound; // Return 1 if at least one digit is found, else 0
}