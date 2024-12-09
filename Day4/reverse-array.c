#include<stdio.h>
int main(){
    int size;
    printf("enter the number of elements:");
    scanf("%d",&size);
     int arr[size];
    printf("enter the elements of array:");
    for(int i=0; i<size;i++){
        scanf("%d", &arr[i]);
    }
    printf("original array elements are as follows:\n");
    for(int i=0; i<size;i++){
        printf("%d\t", &arr[i]);
    }
    printf("\nreversed array elements are as follows:\n");
    for(int i=size-1; i>=0; i--){
        printf("%d\t", &arr[i]);
    }
}        
        

        

