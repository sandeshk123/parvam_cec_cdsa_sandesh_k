#include<stdio.h>
int main(){
    // datatype array_name[size];
    int arr[5] = {10,20,30,40,50}; //declaring & initiallizing an array
    printf("the array elements are as follows:\n");
    for(int i=0; i<5; i++){
        printf("%d\t", arr[i]);
    }
}        