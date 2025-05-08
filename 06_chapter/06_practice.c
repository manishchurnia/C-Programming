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


//class program
// #include <stdio.h>

// int main(){
//     int enter_choice, a, b;
//     int choice, result_addition, result_multi; float result_percentage_sub1, result_percentage_sub2, result_percentage_sub3;
//     float result_mod, total_percent;
//     int sub_1, sub_2, sub_3, total_marks;
//     printf("enter 1 for arithmetic and 2 for percentage calculation: ");
//     scanf("%d", &enter_choice);

//     if(enter_choice == 1){
//         printf("enter 4 for addition\nenter 5 for multiplication\nenter 6 for modulus\n");
//         scanf("%d", &choice);
//         if(choice == 4){
//             printf("enter a: ");
//             scanf("%d", &a);
//             printf("enter b:");
//             scanf("%d", &b);
//             result_addition = a + b;
//             printf("the result of addition is: %d\n", result_addition);
//         }
//         else if(choice == 5){
//             printf("enter a: ");
//             scanf("%d", &a);
//             printf("enter b:");
//             scanf("%d", &b);
//             result_multi = a * b;
//             printf("the result of multiplication is: %d\n", result_multi);
//         }
//         else{
//             printf("enter a: ");
//             scanf("%d", &a);
//             printf("enter b:");
//             scanf("%d", &b);
//             result_mod = a%b;
//             printf("the result of mod is: %f\n", result_mod);
//         }
//     }
//     else if(enter_choice == 2){
//         printf("enter marks in 3 subjects\n");
//         printf("marks sub_1:");
//         scanf("%d", &sub_1);
//         printf("marks sub_2:");
//         scanf("%d", &sub_2);
//         printf("marks sub_3:");
//         scanf("%d", &sub_3);
//         total_marks = sub_1+sub_2+sub_3;
//         result_percentage_sub1 = (sub_1/50.00)*100.00;
//         result_percentage_sub2 = (sub_2/50.00)*100.00;
//         result_percentage_sub3 = (sub_3/50.00)*100.00;
//         total_percent = (total_marks/150.00)*100.00;
//         printf("percentage in subject 1: %f\n",result_percentage_sub1);
//         printf("percentage in subject 2: %f\n",result_percentage_sub2);
//         printf("percentage in subject 3: %f\n",result_percentage_sub3);
//         printf("total percentage: %f\n", total_percent);
//     }
//     return 0;
// }


// write a program to change the value of a variable to ten times its current value
// by call by value and verify that it does not change the value of said variable
// #include <stdio.h>

// int ten_times(int a) {
//     return a * 10;  
// }

// int main() {
//     int n;
//     printf("Enter n: ");
//     scanf("%d", &n);
//     int result = ten_times(n);
//     printf("value of n: %d\n", n);  
//     printf("Ten times n: %d\n", result);  
//     return 0;
// }



