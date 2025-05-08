// write a program to print address of variable. use this address to get the value of the variable..

// #include <stdio.h>

// int main(){
//     int a = 5;
//     int* s = &a;
//     printf("the address of a is %p\n", &a);
//     printf("the value at address a is %d\n", *s);
//     printf("the value at address a is %d", *(&a));
//     return 0;
// }

// write a program to have a variable i, print the address of i, pass this variable to a function and prints its address. are these address same? why?

#include <stdio.h>

void printAddress(int x) {
    printf("Address of i inside function: %p\n", (void*)&x);
}

int main() {
    int i = 10;
    printf("Address of i in main: %p\n", (void*)&i);

    printAddress(i);

    return 0;
}
