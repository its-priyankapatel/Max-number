#include <stdio.h>
int main()
{
    int x[10], i, largest;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);
    }
    largest = x[0];
    for (i = 1; i < 10; i++)
    {
        if (x[i] > largest)
            largest = x[i];
    }
    printf("largest: %d", largest);
    return 0;
}