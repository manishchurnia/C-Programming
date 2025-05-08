#include <stdio.h>

int main(){
    // POINTER ARITHMETIC USING INTEGER POINTER
    int a = 5;
    int* ptr = &a;
    printf("the address of a is: %u\n", &a);
    printf("the address of a is: %u\n", ptr);
    ptr++; // ye ptr address ko utne se increment jitna vo memory me space le raha hai means jaise ki integer 4bytesleta hai to address is incremented by 4 
    printf("the value of ptr is %u\n", ptr);
    return 0;
}


#include <stdio.h>

int main(){
    // POINTER ARITHMETIC USNG CHARACTER POINTER
    char a = 'A';
    char* ptr = &a;
    printf("the address of a is: %u\n", &a);
    printf("the address of a is: %u\n", ptr);
    ptr++; // ye ptr address ko utne se increment jitna vo memory me space le raha hai means jaise ki character 1bytes leta hai to address is incremented by 1 
    printf("the value of ptr is %u\n", ptr);
    return 0;
}

// Following operations can be performed on a pointer:

// 1. Addition of a number to a pointer. addtion doesn't mean increment by 1 it means increment by 4 bytes. if we say 771 + 1 it means 775...771 bytes + 4 bytes.

// 2. Subtraction of a number from a pointer.

// 3. Subtraction of one pointer from another.

// 4. Comparison of two pointer variables.