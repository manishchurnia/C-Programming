// print multiplication table of a given number n

// #include <stdio.h>

// int main(){
//     int n, a;
//     scanf("%d", &n);
//     for(a = 0; a<11; a++){
//         printf("%d\n", n*a);
//     }
//     return 0;
// }


// print multiplication table of 10 in reverse order

// #include <stdio.h>

// int main(){
//     int a;
//     for(a = 10; a >= 0; a--){
//         printf("%d\n", 10*a);
//     }
//     return 0;
// }


// to print sum of first n natural numbers using while loop

// using while loop
// #include <stdio.h>

// int main(){
//     int n, i, sum;
//     printf("enter value:");
//     scanf("%d", &n);
//     sum = 0;
//     i = 1;
//     while(n >= i){
//         sum+=i;
//         i++;
//     }
//     printf("%d\n", sum);
//     return 0;
// }

// using for loop
// #include <stdio.h>

// int main(){
//     int n, i, sum;
//     printf("enter value:");
//     scanf("%d", &n);
//     sum = 0;
//     i = 1;
//     for(i = 1; n>=i; i++){
//         sum+=i;
//     }
//     printf("%d\n", sum);
//     return 0;
// }

// using do while loop

// #include <stdio.h>

// int main(){
//     int n, i, sum;
//     printf("enter value:");
//     scanf("%d", &n);
//     sum = 0;
//     i = 1;
//     do
//     {
//         sum+=i;
//         i++;
//     } while (n>=i);
    
//     printf("%d\n", sum);
//     return 0;
// }

// write a program to calculate the sum of the numbers occuring in the multiplication table of 10.

// #include <stdio.h>

// int main(){
//     int i, sum;
//     sum = 0;
//     for(i = 10; i<=100; i+=10){
//         sum+=i;
//     }
//     printf("%d\n", sum);
//     return 0;
// }

// program to write factorial of a given number

// #include <stdio.h>

// int main(){
//     int n, i, result;
//     printf("enter a number:");
//     scanf("%d", &n);
//     if(n==0 || n==1){
//         printf("1\n");
//     }
//     else{
//         result = 1;
//         for(i=1; i<=n; i++){
//             result*=i;
//         }
//     }
//     printf("%d\n", result);
//     return 0;
// }


// write a program to check whether a number is prime or not using loops.

// factorial of a given number using while loop

// #include <stdio.h>

// int main(){
//     int i = 1, n, result = 1;
//     printf("enter a number: ");
//     scanf("%d", &n);
//     if(n==0 || n==1){
//         printf("%d\n", result);
//     }
//     else{
//         while(i<=n){
//             result*=i;
//             i++;
//         }
//         printf("%d", result);
//     }
//     return 0;
// }










