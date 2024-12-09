#include<stdio.h>
int main(){
    int num, rev=0, org;
    printf("enter a number to be reversed:");
    scanf("%d", &num);
    // while(condition)
    printf("enter number: %d\n", num);
    while(num>0){
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    printf("reversed number: %d\n", rev);
    if(org==rev){
        printf("the given number is a palindrome.");
    }     
    else{
        printf("the given number is not a palindrome");
    }
}    
// num = 683
// step1: 683 > 0 - t 
    //    rev = 0 * 10 + 683 % 10 = 0 + 3 = 3 
    //    num = 683 / 10 = 68
// num = 683
// step2: 683 > 0 - t 
    //    rev = 3 * 10 + 68 % 10 = 30 + 8 = 3 
    //    num = 68 / 0 = 68    