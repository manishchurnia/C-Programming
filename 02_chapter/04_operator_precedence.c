// operators precedence
// priority        operators
// 1st             */%
// 2nd             +-
// 3rd             =
// operators of higher priority evaluated first in the absence of parenthesis
// operators associativity
// when operators of equal priority(*/) present in an expression then expression is evaluated from left to right

#include <stdio.h>

int main(){
    int a = 10, b = 2, c = 4, d, e, f = 5, s;
    d = a*b/c; // a*b is evaluated first and then divided by c and gives output #5
    printf("%d\n", d); 
    e = a*(c/b); // (c/b) is evaluated first and then multiplied with a
    printf("%d\n", e);
    s = a*b/c + f;
    printf("%d", s);
    return 0;
}
