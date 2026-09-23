#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
 }

 void transposeMatrix(int **matrix,int rows,int cols){
   
    for(int i=0;i<rows;i++){
        for(int j=i+1;j<cols;j++){
            swap(&matrix[i][j],&matrix[j][i]);
        }
    }
 }
 int main(){
    int rows=3,cols=3;
     int **matrix=(int **)malloc(rows*sizeof(int *)); //matrix is a pointer to pointer of int
    for(int i=0;i<rows;i++){
        matrix[i]=(int *)malloc(cols*sizeof(int)); //matrix[i] is a pointer to int allocated dynamically of size
    }
    
    int count=1;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            matrix[i][j]=count++;
        }
    }
    printf("Original Matrix:\n");
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    transposeMatrix(matrix,rows,cols);
    printf("Transposed Matrix:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<rows;i++){
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}