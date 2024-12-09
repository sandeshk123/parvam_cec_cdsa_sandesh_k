#include<stdio.h>
int main(){
    int num, square, i=1;
    printf("enter a range to print the perfect square:");
    scanf("%d", &num);
    do{
        if((square = (i*i)) < num){
            printf("%d\n", square);
            i++;
        }
    } while(num>0);
}

num = 10
step1: square = 1*1 < 10 = 1 - t 
        1
        10>0 - t 
num = 10
step2: square = 1*1 < 10 = 1 - t 
        1
        10>0 - t 
num = 10
step3: square = 1*1 < 10 = 1 - t 
        1
        10>0 - t 
num = 10
step4: square = 1*1 < 10 = 1 - t 
        1
        10>0 - t 

