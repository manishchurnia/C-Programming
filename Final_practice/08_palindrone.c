#include <stdio.h>

int is_palindrone(int n){
    int originalnum = n, remainder, reversednum=0;
    while(n>0){
        remainder=n%10; // gets the last digit
        reversednum = (reversednum*10)+remainder; //build reversed number
        n/=10; //remove last digit
    }
    return (originalnum == reversednum);
}
int main(){
    int n;
    scanf("%d", &n);

    if(is_palindrone(n)){
        printf("is a palindrone");
    }
    else{
        printf("not a palindrone");
    }
    return 0;
}