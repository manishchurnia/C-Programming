#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d", &n);
    ptr = (int*) calloc(n, sizeof(int));
    // int arr[n]; // Not allowed in c
    ptr[0] = 3; 
    printf("%d", ptr[0]);
    return 0;
}

// malloc takes a single argument: the total number of bytes to allocate.
// calloc takes two arguments: the number of elements and the size of each element