// #include <stdio.h>

// int main(){
//     char a = 't';
//     char* j = &a; // j is a pointer pointing to a(j is a character pointer)
//     char f = 'w';
//     printf("the address of a is: %p\n", &a); //we can also write %u here.
//     printf("the address of a is: %u \n", j);
//     printf("the address of f is: %u\n", &f);

//     printf("the value at address j is: %d\n", *j);  // Printing the value at the address stored in pointer 'j'
//     printf("the value at address j is: %d\n", *(&a));
//     printf("the address of j is: %p\n", &j); // Printing the address of the pointer 'j' itself
//     return 0;
// }



#include <stdio.h>

int main(){
    float a = 5.324;
    float* j = &a; // j is a pointer pointing to a(j is a float pointer)
    float f = 34.0000;
    printf("the address of a is: %p\n", &a); //we can also write %u here.
    printf("the address of a is: %p\n", j);
    printf("the address of f is: %p\n", &f);

    printf("the value at address j is: %f\n", *j);  // Printing the value at the address stored in pointer 'j'
    printf("the value at address j is: %f\n", *(&a));
    printf("the address of j is: %p\n", &j); // Printing the address of the pointer 'j' itself
    return 0;
}



