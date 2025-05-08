//write program to read three integer from a file

#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("manish1.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("first integer: %d\n",num);
    fscanf(ptr, "%d", &num);
    printf("second integer: %d\n",num);
    fscanf(ptr, "%d", &num);
    printf("third integer: %d\n",num);
    return 0;
}