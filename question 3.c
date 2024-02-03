#include <stdio.h>
#include <stdbool.h>

bool containsDuplicate(int nums[], int size) {
 int hashSet[100000] = {0};

    for (int i = 0; i < size; i++) {
        if (hashSet[nums[i]] == 1) {
            // Found a duplicate
            return true;
        } else {

            hashSet[nums[i]] = 1;
        }
    }

    // No duplicates found
    return false;
}

int main() {
    // Example usage
    int nums[] = {9, 2, 3, 4, 5, 8}; // Array with no duplicates
    int size = sizeof(nums) / sizeof(nums[0]);

    bool hasDuplicates = containsDuplicate(nums, size);

    if (hasDuplicates) {
        printf("The array contains duplicates.\n");
    } else {
        printf("The array does not contain duplicates.\n");
    }

    return 0;
}









