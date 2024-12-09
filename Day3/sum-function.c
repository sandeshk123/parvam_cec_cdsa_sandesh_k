#include<stdio.h>
// datatype fun_ name(parameters){ // function declaration
// statements for some operations //function definition
// }
int sum(int a, int b){
    return a+b;
}
int main(){
    int op1, op2, add;
    printf("enter any 2 numbers:");
    scanf("%d %d", &op1, &op2);
    add = sum(op1, op2);//funcion call
    printf("sum of %d & %d : %d",op1,op2,add);
}       