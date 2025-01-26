#include <stdio.h>

int change(int a);

int change(int a){
    a = 77; // misnomer
    return 0;
}

int main(){
    int b = 22;
    change(b); // the value of b remains 22
    printf("%d\n", b);
    return 0;
}

// this function's name is change() it doesn't actually changes value.