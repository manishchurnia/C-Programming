// // write a program to print address of a variable. use this address to get the value of the variable 

// #include <stdio.h>

// int main(){
//     int a = 18;
//     int* j = &a;
//     printf("the adress of a is: %p\n", &a);
//     printf("the value of i %u", *j);
//     return 0;
// }

// write a program having variable 'i' print the address of i , pass this variable to a function and prints its address.are these address same? why?

// #include <stdio.h>

// int main(){
//     int i = 18;
//     printf("the adress pf i is: %p", &i);
//     return 0;
// }

// write a program to change the value of a variable to ten times its current value

// #include <stdio.h>

// int ten_times(int*);

// int ten_times(int* a){
//     return *a * 10;
// }

// int main(){
//     int n;
//     printf("enter n: ");
//     scanf("%d", &n);
//     printf("%d", ten_times(&n));
//     return 0;
// }

// write a function and pass the value by reference
// same as above question

// write a program using a function which calculates the sum and averager of two numbers. use pointers and prints the value of sum and average in main().

// #include <stdio.h>

// int sum(int* a, int* b){
//     return *a + *b;
// }

// float avg(int* a, int*b){
//     return (*a + *b)/2.0;// Use 2.0 to ensure floating-point division
// }

// int main(){
//     int x = 5, y = 10;
//     int* j = &x;
//     int* k = &y;
//     printf("the sum is %d\n", sum(&x, &y));
//     printf("the avg is %f:",avg(&x, &y));
//     return 0;
// }

