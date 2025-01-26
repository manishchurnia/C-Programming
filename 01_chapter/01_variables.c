// types of instructions
// type decalaration instruction

// In C, type declaration instructions are used to define variables and their data types.
// if you define any variable with any data type you can't redefine it.

#include <stdio.h>

int main(){
    int a = 5;
    float b = 7.5;
    float a = 3.2;
    int i = 10;
    int j = i;
    int w, x, y, z;
    w = x = y = z = 15; // w x y z all are equal to 15... this ine of code is correct.
    printf("%d", a);
    printf("%f", a);
    printf("%d", j); // this gives output "10"
    return 0;
}

// this code gives an error 
// 01_variables.c:12:11: error: conflicting types for 'a'
//      float a = 3.2;
//            ^
// 01_variables.c:10:9: note: previous definition of 'a' was here
//      int a = 5;

