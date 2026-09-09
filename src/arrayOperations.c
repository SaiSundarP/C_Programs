#include <stdio.h>
#include "my_lib/removeDuplicatesHash.h"
#include "complexity.h"
int main()
{
    START_COMPLEXITY();
    int a[] = {1, 2, 3, 2, 4, 1, 5};
    int size = sizeof(a) / sizeof(a[0]);
    int result[1000];
    int resultSize = 0;
    removeDuplicatesHash(a, size, result, &resultSize);
    for (int i = 0; i < resultSize; i++)
    {
        printf("%d ", result[i]);
    }
    return 0;
    END_COMPLEXITY();
}