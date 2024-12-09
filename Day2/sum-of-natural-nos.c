#include<stdio.h>
int main(){
    int num, sum=0;
    printf("enter a positive number:");
    scanf("%d", &num);
    for(int i=0; i<=num; i++){
        sum = sum + i;
    }
    printf("the sum of natural numbers from 0 to  %d: %d", num, sum);
}  

// num=6
// step1: i = 0, 0 < = 6 - t 
    //   sum = 0 + 0 = 0
// step2: i = 1, 1 < = 6 - t 
    //   sum = 0 + 1 = 0
// step3: i = 2, 2 < = 6 - t 
    //   sum = 1 + 2 = 0
// step4: i = 3, 3 < = 6 - t 
    //   sum = 2 + 3 = 0
// step5: i = 4, 4 < = 6 - t 
    //   sum = 3 + 4 = 0