// // call by value

#include <stdio.h>

int sum(int, int);

int sum(int a, int b){
    a = 6; // sum function can't changes x using a because copy of x is provided to sum in a
    return a+b;
}

int main(){
    int x = 1; int y = 7;
    printf("the sum of x and y is %d\n", sum(x,y));
    printf("the value of x is %d", x);
    return 0;
}

// call by reference
// address is passed in call by reference

// #include <stdio.h>

// int sum(int*, int*);

// int sum(int* a, int* b){
//     *a = 8;
//     return(*a + *b);
// }

// int main(){
//     int x = 1; int y = 10;
//     printf("the sum of x and y is: %d\n",sum(&x, &y));
//     printf("the value of x is %d", x);
    
//     return 0;
// }
