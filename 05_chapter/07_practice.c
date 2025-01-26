// // program to find average of three numbers using function.

// #include <stdio.h>

// float average(int, int, int);

// float average(int a, int b, int c){
//     return (a+b+c)/3.0; // we have written 3.0 because int/float = float 
// }

// int main(){
//     int x,y,z;
//     printf("enter value of x:");
//     scanf("%d", &x);
//     printf("enter value of y:");
//     scanf("%d", &y);
//     printf("enter value of z:");
//     scanf("%d", &z);
//     printf("the average of %d %d and %d is %f: ",x, y, z, average(x,y,z));
//     return 0;
// }

// write a function to cover celcius temperature into farnehiet

// #include <stdio.h>

// float celcius_to_farenhiet(float);

// float celcius_to_farenhiet(float a){
//     return (a * 9/5) + 32;
// }

// int main(){
//     int c;
//     printf("enter temperature in celcius:");
//     scanf("%d", &c);
//     printf("the temperature in farenhite is %f", celcius_to_farenhiet(c));
//     return 0;
// }

// write a function to calculate force of attraction on body of mass 'm' exerted by earth. consider g = 9.8 m/s^2

// #include <stdio.h>

// float force(float);

// float force(float a){
//     return a * 9.8;
// }

// int main(){
//     int mass;
//     printf("enter mass of body:");
//     scanf("%d", &mass);
//     printf("the exerted force is %f", force(mass));
//     return 0;
// }


// // write a program using recurssion to find nth element of fiboncci sequence

// #include <stdio.h>

// // fiboncci sequence --> 0,1,1,2,3,5,8,13,21,34...

// int fiboncci(int);
// int fiboncci(int a){
//     if(a == 1 || a == 2){
//         return a-1;
//     }
//     return fiboncci(a-1) + fiboncci(a-2);
// }
// int main(){
//     int n;
//     printf("enter the value of n:");
//     scanf("%d", &n);
//     printf("the %dth element of fiboncci sequence is %d", n, fiboncci(n));
//     return 0;
// }

// // write a recurssive function to calculate the sum of first 'n' natural numbers.

// #include <stdio.h>

// int sum_of_n(int);

// int sum_of_n(int a){
//     if(a == 1){
//         return 1;
//     }
//     return a + sum_of_n(a-1);
// }

// int main(){
//     int n;
//     printf("enter value of n:");
//     scanf("%d", &n);
//     printf("the result is %d", sum_of_n(n));
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int a = 4;
//     printf("%d %d %d", a, ++a, a++); // this prints 6 6 4 because it calculates from right to left but 4 5 5 is also correct while caclculating from left to right
//     return 0;
// }

// // write a program to print the given pattern
// /*   *
//      * * *
//      * * * * *         */

// #include <stdio.h>

// int main(){
//     int n = 3;
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<2*i + 1; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }






