#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    char* prefix = malloc(201);
    strcpy(prefix, strs[0]);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;

        while (prefix[j] && strs[i][j] &&
               prefix[j] == strs[i][j]) {
            j++;
        }

        prefix[j] = '\0';
    }

    return prefix;
}

int main() {
    char* strs1[] = {"flower", "flow", "flight"};
    char* result = longestCommonPrefix(strs1, 3);

    printf("Test 1: %s\n", result);
    free(result);

    char* strs2[] = {"dog", "racecar", "car"};
    result = longestCommonPrefix(strs2, 3);

    printf("Test 2: %s\n", result);
    free(result);

    return 0;
}