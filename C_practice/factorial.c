#include <stdio.h>

unsigned long long fact(int n){
    if(n==0 || n==1){
       return 1; 
    }
    return n * fact(n-1);
}

int main(){
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    printf("the factorial of %d is: %llu", a, fact(a));
    return 0;
} 
