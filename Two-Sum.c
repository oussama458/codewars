#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    
    if (numsSize < 2) {
        *returnSize = 0;
        return NULL;
    }
    
    int* result = (int*)malloc(2 * sizeof(int));
    
    for(int i = 0; i < numsSize; i++) {
        for(int j = i + 1; j < numsSize; j++) {
            if((nums[i] + nums[j]) == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    *returnSize = 0;
    free(result);
    return NULL;
}

int main() {
    printf("Testing two sum function:\n");
    
    
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    int returnSize1;
    int* result1 = twoSum(nums1, sizeof(nums1)/sizeof(nums1[0]), target1, &returnSize1);
    
    if (result1) {
        printf("Test Case 1 (Exists): Indices: %d, %d\n", result1[0], result1[1]);
        free(result1);
    } else {
        printf("Test Case 1 - No solution found\n");
    }
    
    // Test case 2
    int nums2[] = {2, 7, 11, 15};
    int target2 = 13;
    int returnSize2;
    int* result2 = twoSum(nums2, sizeof(nums2)/sizeof(nums2[0]), target2, &returnSize2);
    
    if (result2) {
        printf("Test Case 2 (No Solution): Indices: %d, %d\n", result2[0], result2[1]);
        free(result2);
    } else {
        printf("Test Case 2 - No solution found\n");
    }
    
    return 0;
}