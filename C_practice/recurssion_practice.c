// factorial using recurssion

// #include <stdio.h>

// unsigned long long fact(int n){
//     if(n == 0 || n == 1) {
//         return 1;
//     }
//     return n * fact(n-1);
// }

// int main(){
//     int a;
//     scanf("%d", &a);
//     printf("factorial of %d is %llu", a, fact(a));
//     return 0;
// }

// fiboncci 

#include <stdio.h>

int fiboncii(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    return fiboncii(n-1) + fiboncii(n-2);
}
int main(){
    int a;
    scanf("%d", &a);
    for(int i = 0; i<a; i++){
        printf("%d", fiboncii(i));
    }
    return 0;
}