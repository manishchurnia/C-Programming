#include <stdio.h>

int main(){
    int marks[5];
    int i;
    printf("Enter marks of 5 students:\n");
    // scanf("%d", &marks[0]);
    // scanf("%d", &marks[1]);
    // scanf("%d", &marks[2]);
    // scanf("%d", &marks[3]);
    // scanf("%d", &marks[4]);
    for(i = 0; i<5; i++){
        scanf("%d",&marks[i]);
    }
    for(i = 0; i<5; i++){
        printf("the value of the marks at the index %d is %d\n", i, marks[i]);
    }
    
    return 0;
}