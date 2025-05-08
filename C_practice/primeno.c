//to check prime number

#include <stdio.h>

int main(){
    int n, i;
    scanf("%d, &n");
    if(n<=1){
        printf("prime num");
    }
    for(i=2; i<n; i++){
        if(n%i==0){
            printf("not prime");
        }
        else{
            printf("prime num.\n");
        }
    }
    return 0;
}

