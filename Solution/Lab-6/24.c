// 24. Write a program two multiply two matrices.

#include<stdio.h>

int main(){
    int row1,col1,row2,col2;
    printf("Enter For Matrix 1 M x N : ");
    scanf("%d %d",&row1,col1);
    printf("Enter For Matrix 2 M x N : ");
    scanf("%d %d",&row2,col2);
    int arr1[row1][col1];
    int arr2[row2][col2];
    printf("Enter Value of Matrix 1 : \n");
    for(int i = 0 ; i < row1 ; i++){
        for(int j = 0 ; j < col1 ; j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter Value of Matrix 2 : \n");
    for(int i = 0 ; i < row2 ; i++){
        for(int j = 0 ; j < col2 ; j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    int arr3[row1][col2];
    for(int i = 0 ; i < row2 ; i++){
        for(int j = 0 ; j < col2 ; j++){
            
        }
    }
}