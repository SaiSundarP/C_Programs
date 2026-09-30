#ifndef ARRAY_H
#define ARRAY_H


//The function uses recursive binary search algorithm to search for the target element. It returns index of the element if found , else it returns -1
//Time complexity: O(logn) Space Complexity : O(logn)
int binarySearchRecursive(int *arr,int l, int h,int target){
    if(l>h)
        return -1;
    int m =(l+h)/2;
    if(target==arr[m]){
        return m;
    }
    else if(target<arr[m]){
        binarySearchRecursive(arr,l,m-1,target);
    }
    else if(target>arr[m]){
        binarySearchRecursive(arr,m+1,h,target);
    }
    
}

#endif