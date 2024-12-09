#include<stdio.h>
int main(){
    int num, sum=0, digit;
    printf("enter any number to get the sum of digits:");
    scanf("%d", &num);
    printf("sum of %d is:",num);
    do{
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }while(num>0);
    printf("%d", sum);
}        