// using recurssion

// #include <stdio.h>

// int fibonci(int a){
//     if(a==0){
//         return 0;
//     }
//     else if(a==1){
//         return 1;
//     }
//     return fibonci(a-1)+fibonci(a-2);
// }

// int main(){
//     int a;
//     scanf("%d", &a);
//     for(int i=0; i<a; i++){
//         printf("%d ", fibonci(i));
//     }   
//     return 0;
// }

// using loop

#include <stdio.h>

void fiboncii(int n){
    int a=0,b=1, next;
    for(int i=0; i<n; i++){
        printf("%d ", a);
        next = a+b;
        a=b;
        b=next;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    fiboncii(n);
    return 0;
}

