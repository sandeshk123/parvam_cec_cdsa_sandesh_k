#include<stdio.h>
int main(){
    int size1,size2;
    printf("enter size of two array:");
    scanf("%d %d",&size1,&size2);
    int arr1[size1],arr2[size2];
    printf("enter the elements of the array 1:",arr1[size1]);
    for(int i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
    }
     printf("enter the elements of the array 2:",arr2[size2]);
    for(int i=0;i<size2;i++){
        scanf("%d",&arr2[i]);
     }
     int size=size1+size2,merge_arr[size];
     for(int i=0;i<size1;i++)
     {
        merge_arr[i]=arr1[i];
     }
     for(int j=0;j<size2;j++)
     {
        merge_arr[size1 + j]=arr2[j];
     }
     printf("the megred array elements are as follows:");
     for(int k=0;k<size;k++){
        printf("%d\t",merge_arr[k]);
     }


}