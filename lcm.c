#include<stdio.h>

void main(){
    // int m = 0;
    // int n = 0;

    // while(m < 20){
    //     n += m;
    //     m += 15;
    // }

    // printf("the result is: %d", n);
    
    int a = 0; 
    int b = 13;

    while(a < b){
        ++a;
        b -= 1;
    }

    printf("%d", b);
}