#include <stdio.h>

int main(){
    int n, originalnum, remainder, result =0;
    printf("enter a number: ");
    scanf("%d", &n);
    originalnum  = n;

    while(n!=0){
        remainder = n%10;
        result += remainder*remainder*remainder;
        n/=10;
    }

    if(originalnum==result){
        printf("armstrong number");
    }
    else{
        printf("not a armstrong number");
    }
    return 0;
}