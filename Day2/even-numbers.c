#include<stdio.h>
int main(){
    int num;
    printf("enter the range to print even numbers:");
    scanf("%d",&num);
    // for (initialization; condition; increment/decrement)
    printf("the even numbers between 0 to %d are as follows:\n:",num);
    for(int i=0; i<=num; i++){
        if(i%2==0){
           printf("%d\n",i);
        }   
    } 
     printf("the odd numbers between 0 to %d are as follows:\n:",num);
    for(int i=0; i<=num; i++){
        if(i%2==0){
           printf("%d\n",i);
        }   
    }
}    
num=8
step 1:
     i=0, 0<=8 - the
     o%2 = 0 - the
     0      
step 2: i=>1
     1 < = 8 - t
     1%2 == 1 - f
     0           