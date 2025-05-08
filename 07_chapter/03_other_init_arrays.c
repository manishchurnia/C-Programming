#include <stdio.h>

int main(){
    int cgpa[3] = {9,8,6}, i; // or we can write cgpa[] also it can automatically calculate
    for(i = 0; i<3; i++){
        printf("the value of the cgpa at the index %d is %d\n", i, cgpa[i]);
    }
    return 0;
}

// in memory 4 bytes for each integer means 32 bits
