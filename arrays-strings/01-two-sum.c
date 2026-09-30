#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }

    *returnSize = 0;
    return result;
}

int main() {
    int nums1[] = {2, 7, 11, 15};
    int size;
    int* result = twoSum(nums1, 4, 9, &size);

    printf("Test 1: [%d, %d]\n", result[0], result[1]);
    free(result);

    int nums2[] = {3, 3};
    result = twoSum(nums2, 2, 6, &size);

    printf("Test 2: [%d, %d]\n", result[0], result[1]);
    free(result);

    return 0;
}