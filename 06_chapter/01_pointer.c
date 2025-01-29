#include <stdio.h>

int main(){
    int a = 18;
    int* j = &a; // j is a pointer pointing to a(j is a integer pointer)
    int f = 45;
    printf("the address of a is: %p\n", &a); //we can also write %u here.
    printf("the address of a is: %p\n", j);
    printf("the address of f is: %p\n", &f);

    printf("the value at address j is: %d\n", *j);  // Printing the value at the address stored in pointer 'j'
    printf("the value at address j is: %d\n", *(&a));
    printf("the address of j is: %p\n", &j); // Printing the address of the pointer 'j' itself
    return 0;
}