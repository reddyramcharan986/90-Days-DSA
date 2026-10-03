int dominantIndex(int* nums, int numsSize) {
    int largest = 0;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] > nums[largest]) {
            largest = i;
        }
    }

    for (int i = 0; i < numsSize; i++) {
        if (i != largest && nums[largest] < 2 * nums[i]) {
            return -1;
        }
    }

    return largest;
}
