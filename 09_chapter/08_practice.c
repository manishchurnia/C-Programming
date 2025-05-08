// create a 2D vector using structures in c
// #include <stdio.h>

// struct vector{
//     int i;
//     int j;
// };

// int main(){
//     struct vector v = {1,2};
//     printf("the value of vector is %di + %dj", v.i, v.j);
//     return 0;
// }

// write a function 'sumVector' which returns the sum of two vectors passed to it.The vectors must be 2D

// #include <stdio.h>

// struct vector{
//     int i;
//     int j;
// };

// struct vector sumVector(struct vector v1, struct vector v2){
//     struct vector v3 =  {(v1.i + v2.i), (v1.j + v2.j)};
//     return v3;
// }

// int main(){
//     struct vector v1 = {1,2};
//     struct vector v2 = {5,6};
//     struct vector v3 = sumVector(v1,v2);
//     printf("the value of vector v3 is %d i + %d j", v3.i, v3.j);
//     return 0;
// }

//write a program to illustrate the use of arrow operater-> in C

// #include <stdio.h>

// typedef struct employee{
//     int sallary;
//     float score;
// }Employe;

// int main(){
//     Employe e1;
//     Employe* ptr = &e1;
//     //*ptr.sallary = 56;
//     ptr->sallary = 56;
//     ptr->score = 54.78;
//     printf("the value of sallary is %d and the value of score is %f", ptr->sallary, ptr->score);
//     return 0;
// }

//write a program with a structure representing a complex number

// #include <stdio.h>

// typedef struct c{
//     int real;
//     int imaginary;
// }Complex;

// int main(){
//     Complex c = {1,2};
//     printf("the value of complex number is %d + %d i", c.real, c.imaginary);
//     return 0;
// }

//create an array of 5 complex numbers created in problem 5 and display them with a help of display function. The values must be taken as an input from the user. 

// #include <stdio.h>

// typedef struct c{
//     int real;
//     int imaginary;
// }Complex;

// void display(Complex c){
//     printf("the value of complex number is %d + %d i \n", c.real, c.imaginary);
// }

// int main(){
//     Complex carr[5];
//     for(int i = 0; i<5; i++){
//         printf("enter real number \n");
//         scanf("%d", &carr[i].real);
//         printf("enter imaginary number \n");
//         scanf("%d", &carr[i].imaginary);
//         display(carr[i]);
//     }
//     return 0;
// }

//create a structure representing a bank account.

// #include <stdio.h>
// #include <string.h>  // Include for strcpy function

// struct bankacc {
//     int accNo;
//     char name[19];   // Array to store name (19 characters max)
//     char ifsc[19];   // Array to store IFSC code (19 characters max)
//     float balance;
// };

// int main() {
//     struct bankacc b;

//     b.accNo = 4567890;
//     // Use strcpy to copy the string into the character array
//     strcpy(b.name, "manish");
//     strcpy(b.ifsc, "churnia");
//     b.balance = 1234590.086;

//     // Print bank account details
//     printf("Account Number: %d\n", b.accNo);
//     printf("Name: %s\n", b.name);
//     printf("IFSC Code: %s\n", b.ifsc);
//     printf("Balance: %.2f\n", b.balance);

//     return 0;
// }







