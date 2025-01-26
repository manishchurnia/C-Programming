// arithmetic instruction
// + (addition)
// - (subtraction)
// * (multiplication)
// / (division)
// % (modulus) used to get remainder
// modulus cant be applied on float
// sign is as same as numerator (-5/2 = -1)
// x + y = z (x and y are operands, z is result and + = are operators)

#include <stdio.h>

int main(){
    int a, b, c, i, z, y, w;
    a = 3;
    b = 2;
    c = a + b;
    // i = ab; this is invalid
    i = a * b; // this is valid
    z = a*b; // this is valid
    // a*b = z  this is not valid
    y = a/b;
    w = a%b;
    printf("%d\n", c);
    printf("%d\n", i);
    printf("%d\n", z);
    printf("%d\n", y);
    printf("%d", w);
    return 0;
}

// int x = y^z is not valid for exponential function in C programming.