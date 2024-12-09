#include<stdio.h>
int main(){
    int num1, num2;
    printf("enter any 2 numbers:");
    scanf("%d %d", &num1, &num2);
    if(num1 > num2){
        printf("%d is greater than %d", num1, num2);
    }
    else{
        printf("%d is greater than %d", num2, num1);
    }
    //(condition) ? true : false
    (num1>num2) ? printf("first number(%d) is greater than second number (%d)\n", num1, num2):printf("second number (%d) is greater than first number (%d)\n", num2, num1);
}            
