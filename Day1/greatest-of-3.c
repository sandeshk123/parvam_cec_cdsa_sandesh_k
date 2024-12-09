#include<stdio.h>
int main(){
   int num1, num2, num3;
   printf("enter any 3 numbers:");
   scanf("%d %d %d", &num1, &num2, &num3); 
   first method - nested if 
   if(num1 > num2){
       if(num1 > num3){
           printf("first number (%d) is greatest", num1);
       }
       else{
           printf("third number (%d) is greatest", num3);
       }
   }
   else{
       if(num2 > num3){ 
           printf("second number (%d) is greatest", num2); 
       }
       else{
           printf("third number (%d) is greatest", num3);
       }
   }
   second method - if-else ladder
   if((num1 > num2)&& (num1 > num3)){
        printf("first number (%d) is greatest", num1);
   }else if(num2>num3){
       printf("second number (%d)is greatest", num2);
   }else{
       printf("third number (%d)is greatest", num3);
   }
    