/*LC-345: Reverse Vowels of a String

Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include "complexity.h"

//function checks whether the char is vowel or not
bool isVowel(char ch){
    char c=tolower(ch);
    if(c=='a' || c=='e'|| c=='i' || c=='o' || c=='u'){
        return true;
    }
    return false;
}
char* reverseVowels(char* s) {
    int left=0,right=strlen(s)-1; //two pointers that moves one from left and another from right most end
    while(left<right){
        if(isVowel(s[left]) && isVowel(s[right])){ //if both pointers points to vowel then swaps
            char temp=s[left];
            s[left++]=s[right];
            s[right--]=temp;
        }
        else if(!isVowel(s[left])){ //if left pointer points to consonant then it moves one step ahead
            left++;
        }
        else if(!isVowel(s[right])){ // if right pointer points to consonant then it decrements
            right--;
        }
       
    }
    return s;
}

int main(){
    START_COMPLEXITY();
    char str[]="IceCreAm";
    printf("%s\n",reverseVowels(str));
    END_COMPLEXITY();
    return 0;
}