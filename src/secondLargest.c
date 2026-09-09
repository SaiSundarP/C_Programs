#include<stdio.h>
#include<stdlib.h>

int secondLargest(int *arr,int n){
	int secondLargest=-1, largest=-1;
	for(int i=0;i<n;i++){
		if(arr[i]>largest){
			secondLargest=largest;
			largest=arr[i];
		}
		else if(arr[i]<largest && arr[i]>secondLargest){
			secondlargest=arr[i];
		}
	}
return secondLargest;
}