#include<stdio.h>
int square(int a){
    return a*a;
}
int cube(int a){
    return a*a*a;
}
int main(){
    int num, result;
    printf("enter a number to find it is square and cube:");
    scanf("%d, &num");
    result= square(num); //function call square function
    printf("the square of %d is : %d\n", num ,result);
    result= cube(num); //function call foe cube function
    printf("the cube of%d is : %d", num , result);
}           