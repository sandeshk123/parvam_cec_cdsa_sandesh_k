#include<stdio.h>
#define pi  3.142
float area(float rad){
    return pi * rad * rad;
}
float circumference(float rad){
    return 2 * pi * rad;
}
int main(){
    float radius, result;
    printf("enter the radius of the circle");
    scanf("%f", &radius);
    result= area(radius); //function call for area
    printf("area of circle for the given radius(%f): %f\n", radius, result);
    result= circumference(radius); //function call for circumference
    printf("circumference of circle for the given radius(%f): %f", radius, result);
}           