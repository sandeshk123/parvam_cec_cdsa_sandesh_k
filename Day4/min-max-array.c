#include<stdio.h>
int main(){
    int size;
    printf("enter the number of elements:");
    scanf("%d",&size);
    int arrofnum[size];
    printf("enter %d elements to the array:",size);
    for(int i=0;i<=size;i++){
        scanf("%d",&arrofnum[i]);
    }
    int max, min;
    min= max = arrofnum[0];
    for(int i=0; i<size; i++){
        if(arrofnum[i] > max){
            max = arrofnum[i];
        }
        if(arrofnum[i]<min){
            min = arrofnum[i];
        }   
    }
    printf("the largest element in the given array is: %d\n", max);
    printf("the smallest element in the given array is: %d", min);
}    

