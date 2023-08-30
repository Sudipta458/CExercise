#include <stdio.h>
#include <stdlib.h>

int main(){
    //get array size from user
    int n;
    scanf("%d", &n);

    //define array of n size
    int size = sizeof(int) * n;
    int* array;
    array = (int*) malloc(size);
    // float* array;
    // array = (float*) malloc(sizeof(float)*n);

    //get data from user
    // for (int i =0; i < n; i++){
    //     scanf("%d", &array[i]);
    // }
    for(int i = 0; i < n; i++){
        scanf("%d", array + i);
    }

    //reverse data
    for(int i = 0; i < n/2; i++){
       int temp = array[i];
       array[i] = array[n - (i + 1)];
       array[n - i - 1] = temp;  
    }   

    for(int i = 0; i < n; i++)
        printf("%d ", array[i]);

    free(array);

}