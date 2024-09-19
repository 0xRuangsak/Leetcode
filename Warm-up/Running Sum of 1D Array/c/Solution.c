#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *runningSum(int *nums, int numsSize, int *returnSize)
{
    // Allocate memory for the result array
    int *result = (int *)malloc(sizeof(int) * numsSize);
    if (result == NULL)
    {
        // Allocation failed
        *returnSize = 0;
        return NULL;
    }

    if (numsSize == 0)
    {
        // If the input array is empty, return NULL
        *returnSize = 0;
        return NULL;
    }

    // Initialize the first element of the result array
    result[0] = nums[0];

    // Compute the running sum
    for (int i = 1; i < numsSize; i++)
    {
        result[i] = result[i - 1] + nums[i];
    }

    // Set the return size
    *returnSize = numsSize;

    return result;
}

int main()
{
    int nums[] = {1, 2, 3, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;

    int *sum = runningSum(nums, numsSize, &returnSize);

    if (sum != NULL)
    {
        printf("Running Sum: ");
        for (int i = 0; i < returnSize; i++)
        {
            printf("%d ", sum[i]);
        }
        printf("\n");
        free(sum); // Don't forget to free the allocated memory
    }
    else
    {
        printf("Failed to compute running sum.\n");
    }

    return 0;
}
