#include <stdio.h>

int main()
{
    int a[] = {125, 302, 145, 501, 220, 175, 410};
    int n = 7;
    int key = 175;
    int i;

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("Book ID %d found at index %d", key, i);
            return 0;
        }
    }

    printf("Book ID %d not found", key);

    return 0;
}
