#include <stdio.h>

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 5, y = 10;
    swap(&x,&y);
    printf("the value of x is %d and y is %d", x, y);
    return 0;
}