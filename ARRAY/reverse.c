#include <stdio.h>

int main(){
    int array[8];
    for(int i = 0 ; i < 8; i ++) scanf("%d", &array[i]);
    for(int i = 0; i < 8/2; i ++){
        int rem = array[i];
        array[i] = array[8 - i];
        array[8 - i] = rem;
    }
    for(int i = 0; i < 8; i++) printf("%d", array[i]);
}