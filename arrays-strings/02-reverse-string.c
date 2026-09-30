#include <stdio.h>
#include <string.h>

void reverseString(char* s, int sSize) {
    int left = 0, right = sSize - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {
    char s1[] = {'h','e','l','l','o'};
    reverseString(s1, 5);

    printf("Test 1: ");
    for (int i = 0; i < 5; i++)
        printf("%c", s1[i]);
    printf("\n");

    char s2[] = {'a'};
    reverseString(s2, 1);

    printf("Test 2: %c\n", s2[0]);

    return 0;
}