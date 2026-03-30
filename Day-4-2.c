#include <stdio.h>

int main() {
    int n, val;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];

    // Input array
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Input value to remove
    printf("Enter value to remove: ");
    scanf("%d", &val);

    int k = 0;  // count of elements not equal to val

    // Remove element in-place
    for(int i = 0; i < n; i++) {
        if(nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }

    // Output result
    printf("Number of elements not equal to %d = %d\n", val, k);

    printf("Updated array:\n");
    for(int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}