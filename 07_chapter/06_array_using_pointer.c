#include <stdio.h>

int main(){
    int marks[] = {13, 35, 32, 91};
    int* ptr = &marks[0]; 
    // int* ptr = marks; // Same as int* ptr = &marks[0];
    for(int i = 0; i < 4; i++){
        printf("the marks at the index %d is %d\n", i, marks[i]);
        printf("the marks at the index %d is %d\n", i, *ptr);
        ptr++;
    }
    return 0;
}
