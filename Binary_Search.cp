#include <stdio.h>

int main()
{
    int a[] = {101, 105, 110, 115, 120, 125, 130, 135, 140, 145};
    int n = 10;
    int key = 130;

    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == key)
        {
            printf("Roll Number %d found at index %d\n", key, mid);
            break;
        }
        else if (key < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (low > high)
    {
        printf("Roll Number %d not found\n", key);
    }

    return 0;
}
