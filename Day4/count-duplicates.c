#include<stdio.h>
int main(){
    int size;
    printf("enter the size of an array");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of the array:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int bkp[10]={0};
    for(int i=0;i<size;i++){
        int count=1;
        if(bkp[i]==0){
            for(int j=i+1;j<size;j++){
                if(arr[i]==arr[j]){
                    count++;
                    bkp[j]=1;
                }
            }
            printf("element %d occurs %d times.\n",arr[i],count);
        }
    }
}