#include <stdio.h>
#include <stdlib.h>

void swap(int* address_a, int* address_b){
    int rem = *address_a;
    *address_a = *address_b;
    *address_b = rem;
}

int main(){
    int a = 6, b = 8;
    swap(&a, &b);
    printf("a: %d, b: %d", a, b);
}