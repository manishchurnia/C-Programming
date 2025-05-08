// reverse a number

#include <stdio.h>

int reversed(int n){
    int reversed = 0, remainder;
    while(n>0){
        remainder = n%10; //extract last digit 
        reversed = (reversed * 10) + remainder;  // Append it to reversed number
        n /= 10;  // Remove last digit
    }
    return reversed;
}

int main(){
    int a;
    printf("enter number to reverse: ");
    scanf("%d", &a);
    printf("%d", reversed(a));
    return 0;
}

// auto storage class 
// #include <stdio.h>

// void display() {
//     auto int a = 10;  // 'auto' is optional here
//     printf("Inside function: %d\n", a);
// }

// int main() {
//     display();
//     // printf("%d", a); ❌ ERROR: 'a' is not accessible outside display()
//     return 0;
// }

// static
// #include <stdio.h>

// void counter() {
//     static int count = 0;  // Static variable (initialized once)
//     count++;  // Increases with each function call
//     printf("Count: %d\n", count);
// }

// int main() {
//     counter();
//     counter();
//     counter();
//     return 0;
// }
  



// C program to check prime number in range a,b
#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0;  // Not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;  // Not prime
    }
    return 1;  // Prime
}

int main() {
    int a, b;
    printf("Enter the range (a b): ");
    scanf("%d %d", &a, &b);

    printf("Prime numbers between %d and %d are:\n", a, b);
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}




