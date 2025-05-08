// factorial using recurssion

#include <stdio.h>

unsigned long long fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n * fact(n-1);
}
int main(){
    int a;
    scanf("%d", &a);
    printf("factorial of %d is: %llu", a, fact(a));
    return 0;
}

// fiboncci sequence

#include <stdio.h>

int fiboncci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    return fiboncci(n-1) + fiboncci(n-2);
}
int main(){
    int a;
    scanf("%d", &a);
    for(int i = 0; i<a; i++){
        printf("%d ", fiboncci(i));
    }
    return 0;
}

// fiboncci bty using loop
#include <stdio.h>

void fiboncci(int n){
    int a=0, b=1, next;
    for(int i=0; i<n; i++){
        printf("%d ", a);
        next = a+b;
        a = b;
        b = next;
    }
}                                             

int main(){
    int a;
    scanf("%d", &a);
    fiboncci(a);
    return 0;
}

// sum of digits

// using function

#include <stdio.h>

int sum_of_digits(int n){
    int sum = 0;
    while(n>0){
        sum += n%10;  // Extract the last digit and add to sum
        n /= 10;        // Remove the last digit
    }
    return sum;
}

int main(){
    int a;
    printf("enter number to find sum: ");
    scanf("%d", &a);
    printf("%d", sum_of_digits(a));
    return 0;
}

// using recurssion

#include <stdio.h>

int sum_of_digits(int n){
    if(n==0){
        return 0;
    }
    return n%10 + sum_of_digits(n/10);
}
int main(){
    int a;
    printf("enter number to find sum: ");
    scanf("%d", &a);
    printf("%d", sum_of_digits(a));
    return 0;
}

// n%10 --> this extract the last digit of a number
// sum_of_digits(n/10) --> this removes the last digit of a number



