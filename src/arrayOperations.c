#include <stdio.h>
//#include "my_lib/removeDuplicatesHash.h"
//#include "complexity.h"

void removeDuplicatesHash(int *arr, int size, int *result,int *resultSize)
{
    // Implementation for removing duplicates using hash set which runs in O(n) time complexity and O(n) space complexity.
    int seen[1000]={}; // Assuming a maximum size for the hash set
    int resultIndex = 0;

    for (int i = 0; i < size; i++) {
        if (!seen[arr[i]]) {
            seen[arr[i]] = 1; // Mark the element as seen
            result[resultIndex++] = arr[i]; // Add unique element to result
        }
    }
    *resultSize = resultIndex;
}

int main()
{
    //START_COMPLEXITY();
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
    //END_COMPLEXITY();
}