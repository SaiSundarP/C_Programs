//You are given an interger array containing money in each house and the function finds the maximum possible sum that can robbed from each house, adjacent house shouls not be robbed.

#include <stdio.h>

int houseRobber(int *cost,int size){
    int dp[size];
    dp[0]=cost[0];
    dp[1]=cost[1];
    for(int i=2;i<size;i++){
        int current=(dp[i-2]>dp[i-1]?dp[i-2]:dp[i-1]);
        dp[i-2]=dp[i-1];
        dp[i-1]=current;
    }
    return (dp[size-1]);
}

int main(){
    int nums[5]={8,7,1,13,3};
    int max = houseRobber(nums,5);
    printf("%d",max);
}