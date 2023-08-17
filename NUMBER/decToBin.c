#include <stdio.h>

int main(){
    int input, binary[8];
    scanf("%d",&input);

    // for(int i = 0; i < 8; i ++){
    //     binary[i] = input % 2;
    //     input /= 2;
    // }

    // // for(int i = 0; i < 8; i++){
    // //     printf("%d", binary[7 - i]);
    // // }

    // for(int i = 7; i >= 0 ; i--){
    //     printf("%d", binary[i]);
    // }

    for(int i = 0; i < 8; i++){
        binary[7 - i] = input % 2;
        input /= 2;
    }

    for(int i = 0; i < 8; i++){
        printf("%d", binary[i]);
    }
}