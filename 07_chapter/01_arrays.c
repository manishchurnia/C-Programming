// an array is collection of similar elements. array allows a single variable to store multiple values 

#include <stdio.h>

int main(){
    int marks[90]; // reserves space for 90 integers
    marks[0] = 45;
    marks[1] = 90;
    scanf("%d", &marks[2]);
    printf("%d\n", marks[2]);
    // we can go all the way till 89
    printf("Marks 0 and Marks 1 is %d %d\n", marks[0], marks[1]);
    return 0;
}