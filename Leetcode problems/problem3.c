#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int* transformArray(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* result = (int*)malloc(numsSize * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 0) {
            result[i] = 0;
        } else {
            result[i] = 1;
        }
    }

    qsort(result, numsSize, sizeof(int), compare);
    
    return result;
}

int main() {
    int nums[] = {4, 3, 2, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;
    
    int* result = transformArray(nums, numsSize, &returnSize);
    
    printf("Output: [");
    for (int i = 0; i < returnSize; i++) {
        printf("%d", result[i]);
        if (i < returnSize - 1) printf(", ");
    }
    printf("]\n");
    
    free(result);
    return 0;
}