#include <stdio.h>
#include <stdlib.h>

int findSingleNumber(int nums[], int size) {
    int result = 0;

    for (int i = 0; i < size; i++) {
        result ^= nums[i];
    }

    return result;
}

int main() {
    // Example usage
    int nums[] = {7,5,2,5,6,7,6};
    int size = sizeof(nums) / sizeof(nums[0]);

    int singleNumber = findSingleNumber(nums, size);

    printf("The single number is: %d\n", singleNumber);

    return 0;
}
