#include <stdio.h>
#include <stdlib.h>

int main(){
    int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int B[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
    int C[3][3] = {{0,0,0},{0,0,0},{0,0,0}};

    //matrix multiplication code
    // for(int row = 0; row < 3; row++){
    //     for(int col = 0; col < 3; col++){
    //         int sum = 0;
    //         for(int k = 0; k < 3; k++){
    //             sum += A[row][k] * B[k][col];
    //         }
    //         C[row][col] = sum;
    //     }
    // }
    
    for(int row = 0; row < 3; row++)
        for(int col = 0; col < 3; col++)
            for(int k = 0; k < 3; k++)
                C[row][col] += A[row][k] * B[k][col];
            
        
    

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }


}