// dynamic memory allocation

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *ptr;
    scanf("%d", &n); 
    // what if i want to create a array of n (arr[n])
    // int arr[n]; but this is not allowed in C
    ptr = (int*) malloc(n * sizeof(int)); //malloc means memory allocation
    ptr[0] = 3;
    ptr[1] = 5;
    printf("%d", ptr[0]);
    return 0;
}