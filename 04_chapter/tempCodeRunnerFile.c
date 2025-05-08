// #include <stdio.h>

// int main(){
//     int a;
//     printf("the value of a is %d\n", a);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int a, sum=0;
//     scanf("%d", &a);
//     for(int i=0; i<=a; i++){
//         sum+=i;
//     }
//     printf("%d", sum);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int a;
//     printf("enter a number:");
//     scanf("%d", &a);
//     if(a<=1){
//         printf("not a prime number");
//     }
//     else if(a==2 || a==3 || a==5 || a==7){
//         printf("%d is a prime number", a);
//     }
//     else if(a%2==0 || a%3==0 || a%5==0 || a%7==0){
//         printf("%d is not a prime number", a);
//     }
//     else{
//         printf("%d is a prime number", a);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int a,sum=0,i;
//     scanf("%d", &a);
//     while(a!=0){
//         i=a%10;
//         sum+=i;
//         a/=10;
//     }
//     printf("%d", sum);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int year;
//     printf("enter year:");
//     scanf("%d", &year);
//     if(year%4==0 && year%100!=0 || year%400==0){
//         printf("%d is a leap year", year);
//     }
//     else{
//         printf("%d not a leap year", year);
//     }
//     return 0;
// }

//reverse a number

// #include <stdio.h>

// int main(){
//     int a, reversed=0, remainder;
//     printf("enter number to reverse:");
//     scanf("%d", &a);
//     //reverse a number
//     while(a!=0){
//         remainder = a%10;
//         reversed = reversed*10 + remainder;
//         a/=10;
//     }
//     printf("revrse is %d", reversed);
//     return 0;
// }

//reverse a number

#include <stdio.h>

int main(){
    int a,reversed=0,remainder;
    printf("enter a number:");
    scanf("%d", &a);
    while(a!=0){
        remainder=a%10;
        reversed = reversed*10+remainder;
        a/=10;
    }
    printf("%d", reversed);
    return 0;
}

// // prime number check
// #include <stdio.h>

// int main(){
//     int a;
//     printf("enter number:");
//     scanf("%d", &a);
//     if(a<=1){
//         printf("not prime");
//     }
//     else if(a==2||a==3||a==5||a==7){
//         printf("prime");
//     }
//     else if(a%2==0||a%3==0||a%5==0||a%7==0){
//         printf("not prime");
//     }
//     else{
//         printf("prime number");
//     }
//     return 0;
// }

//factorial of number

// #include <stdio.h>

// unsigned long long fact(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     return n*fact(n-1);
// }

// int main(){
//     int a;
//     printf("enter number:");
//     scanf("%d", &a);
//     printf("factorial of %d is %llu", a, fact(a));
//     return 0;
// }

//leap year

// #include <stdio.h>

// int main(){
//     int year;
//     scanf("%d", &year);
//     if(year%4==0 && year%100!=0 || year%400==0){
//         printf("leap year");
//     }
//     else{
//         printf("not a leap year");
//     }
//     return 0;
// }

