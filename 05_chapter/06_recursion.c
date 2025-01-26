#include <stdio.h>

int factorial(int);

int factorial(int n){
    if(n == 0 || n == 1){ //base condition
        return 1;
    }
    // factorial n = factorial(n-1)*n
    return factorial(n-1) * n; //recursive case
}

int main(){
    int a = 5;
    printf("the factorial of %d is %d", a, factorial(a));
    return 0;
}

/*How the Recursion Works:
When you call factorial(5), it calls factorial(4), which calls factorial(3), and so on, until it reaches factorial(1) which returns 1.
Then the calls start returning:
factorial(2) returns 2 * 1 = 2
factorial(3) returns 3 * 2 = 6
factorial(4) returns 4 * 6 = 24
factorial(5) returns 5 * 24 = 120*/