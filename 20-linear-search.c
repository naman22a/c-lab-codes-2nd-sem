#include <stdio.h>

int linear_search(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
            return i;
    }

    return -1;
}

int main()
{
    int arr[] = {4, 8, 30, 39};
    int target = 30;

    int i = linear_search(arr, 4, target);

    if (i != -1)
        printf("Element found at index: %d", i);
    else
        printf("Not found");

    return 0;
}