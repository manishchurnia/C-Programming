#include <stdio.h>

int main(){
    int i = 10;
    printf("value of i is %d\n", i); // it prints i = 10
    i = i + 5;
    printf("value of i is %d\n", i); // it prints i = 15
    ++i; // OR i++ prints 16 in both conditions
    printf("value of i is %d\n", i); // it prints i = 16
    // but here
    printf("value of i is %d\n", i++); // it also prinst i = 16 but after printing i becomes 17

    // but line of code written below prints i = 18
    printf("value of i is %d\n", ++i);
    return 0;
}

// i++ prints i first and then increments i (Post increment operator)
// ++i increments i first and then prints i (Pre increment operator)