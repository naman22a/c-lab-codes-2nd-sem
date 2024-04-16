#include <stdio.h>

int binary_search(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;
    int mid;

    while (left < right)
    {
        mid = left + (right - left) / 2;

        if (target > arr[mid])
            left = mid + 1;
        else if (target < arr[mid])
            right = mid - 1;
        else
            return mid;
    }

    return -1;
}

int main()
{
    int arr[] = {4, 8, 30, 39};
    int target = 30;

    int i = binary_search(arr, 4, target);

    if (i != -1)
        printf("Element found at index: %d", i);
    else
        printf("Not found");

    return 0;
}
