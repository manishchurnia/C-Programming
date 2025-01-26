// sizeof() used to check size
// size is dependent on platform you using for coding

#include <stdio.h>

int main() {
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of float: %zu bytes\n", sizeof(float));
    return 0;
}

// float is bigger in size
//1 byte = 8 bits