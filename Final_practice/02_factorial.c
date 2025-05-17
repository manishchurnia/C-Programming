// factorial of a number

#include <stdio.h>

unsigned long long fact(int a){
    if(a==0 || a==1){
        return 1;
    }
    return a*fact(a-1);
}

int main(){
    int n;
    printf("enter number to find factorial: ");
    scanf("%d", &n);

    printf("factorial of %d is %llu", n,fact(n));
    return 0;
}

