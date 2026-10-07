int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    
    int *ans = (int*)malloc(numsSize * sizeof(int));
    int index = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 0) {
            ans[index++] = nums[i];
        }
    }

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 != 0) {
            ans[index++] = nums[i];
        }
    }

    *returnSize = numsSize;

    return ans;
}
