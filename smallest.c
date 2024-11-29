#include <stdio.h>
int main()
{
    int x[10], i, smallest;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);
    }
    smallest = x[0];
    for (i = 1; i < 10; i++)
    {
        if (x[i] < smallest)
            smallest = x[i];
    }
    printf("smallest: %d", smallest);
    return 0;
}