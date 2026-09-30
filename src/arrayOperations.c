#include <stdio.h>
#include "../my_lib/removeDuplicatesHash.h"
#include "../my_lib/array.h"
//#include "complexity.h"

int main()
{
    //START_COMPLEXITY();
    int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(a[0]);
    int index =binarySearchRecursive(a,0,size,4);
    printf("Element 4 is at %d ",index);
    /*int result[1000];
    int resultSize = 0;
    removeDuplicatesHash(a, size, result, &resultSize);
    for (int i = 0; i < resultSize; i++)
    {
        printf("%d ", result[i]);
    }*/

    return 0;
    //END_COMPLEXITY();
}