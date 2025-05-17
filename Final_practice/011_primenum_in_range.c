// print prime numbers between a and b


#include <stdio.h>

int isprime(int n){

    if(n<=1){
        return 0; //not prime
    }
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return 0; //not prime
        }
    }
    return 1; //prime
}
int main(){
    int a,b;
    printf("enter value of a and b: ");
    scanf("%d %d", &a, &b);

    for(int i=a; i<=b; i++){
        if(isprime(i)){
            printf("%d ", i);
        }
    }
    
    return 0;
}