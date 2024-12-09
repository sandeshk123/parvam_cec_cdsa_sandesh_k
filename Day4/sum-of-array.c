#include<stdio.h>
int main(){
    int size;
    printf("enter the size of an array:");
    scanf("%d",&size);
     int arr[size];
    printf("enter the array elements:");
    for(int i=0; i<=size; i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0; i<=size; i++){
        sum+=arr[i];
    }
    printf("the sum of array elements is: %d", sum);
}        
