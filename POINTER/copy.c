#include <stdio.h>
#include <stdlib.h>

void copy(int src[], int dest[], int len){
    for(int i = 0; i < len; i++)
        *dest++ = *src++;
}

int main(){
    int array_a[10] = {1,2,3,4,5,6,7,8,9,10};
    int array_b[10];

    for(int i = 0; i < 10; i++)
        printf("%d ", array_b[i]);
    printf("\n");

    copy(array_a, array_b, 10);

    for(int i = 0; i < 10; i++)
        printf("%d ", array_b[i]);
    printf("\n");
}