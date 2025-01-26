#include <stdio.h>

// function prototype
int sum(int, int);

// function definiton
int sum(int x, int y){
    return x+y;
}

int main(){


    int a = 5;
    int b = 83;
    int c = sum(a,b); // function call
    printf("%d\n", c);


    int d = 35;
    int w = 3;
    int s = sum(d,w); // function call
    printf("%d", s);


    return 0;
}

// important points
// execution of C program starts from main()
// a C program has more than one function 
// every function get called directly or indirectly from main()


// types of function
// Library function --> commonly required function grouped together in a library file or disk. for example... printf()
// user defined function --> these are the function declared or defined by the function
