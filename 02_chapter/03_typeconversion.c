// arithmetic operation between 
// int and int --> int
// int and float --> float
//  float and float --> float
// "%d" for int, "%f" for float, "%c" for char
#include <stdio.h>

int main(){ 
    int a, b, c;
    float x = 7, w = 7, t, y, z = 5.0;
    a = 5;
    b = 2;
    c = a/b;
    y = z + a;
    t = x + w;
    printf("%d\n", c); // gives int output 
    printf("%f\n", y); // gives float output
    printf("%f\n", t); // gives float output
    return 0;
}

// if my float output is 5.7 but i have to represent it in int form so the output 5.7 is demoted to 5