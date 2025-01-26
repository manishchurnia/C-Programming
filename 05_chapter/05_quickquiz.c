//use the library function to calculate area of a square

#include <stdio.h>
#include <math.h>

int main(){
    int s = 10;
    printf("area of the square is %f\n", pow(s, 2));
    return 0;
}

// pow(s, 2) means s raise to the power 2
// here we use %f(format specifier) because it is a long double data type