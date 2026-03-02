#include <stdio.h>

int main()
{
    int arr[10] = {10, 20, 30, 40, 50}; // extra space
    int n = 5;   // current size
    int x, pos;

    printf("Enter the element to insert: ");
    scanf("%d", &x);

    printf("Enter the position to insert (1-based index): ");
    scanf("%d", &pos);

    // validation
    if (pos < 1 || pos > n + 1)
    {
        printf("Invalid position\n");
        return 1;
    }

    // shift elements right
    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // insert element
    arr[pos - 1] = x;
    n++;

    // print array
    printf("Array after insertion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}