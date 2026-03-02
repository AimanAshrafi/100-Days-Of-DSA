#include <stdio.h>

int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int n = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("Indices: [%d, %d]\n", i, j);
                return 0;
            }
        }
    }

    return 0;
}