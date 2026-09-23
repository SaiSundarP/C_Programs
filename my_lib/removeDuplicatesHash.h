//This functino removes duplicates from a given array using a hash set to track seen elements. It iterates through the input array, adding each unique element to the result array and marking it as seen in the hash set. The function returns the new array containing only unique elements.
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