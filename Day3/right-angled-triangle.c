#include<stdio.h>
int main(){
int row;
    printf("Enter the number of rows:");
    scanf(" %d", &row);
    for(int i=1; i<=row; i++){
        for(int j=0; j<i; j++){
            printf("*\t");
        }printf("\n");
    }
}