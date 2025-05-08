#include <stdio.h>

int main(){
    int marks[5];
    int i;
    printf("Enter marks of 5 students:\n");
    for(i = 0; i<5; i++){
        scanf("%d",&marks[i]);
    }
    for(i = 0; i<5; i++){
        printf("the address of the marks at the index %d is %u\n", i, &marks[i]);
    }
    
    return 0;
}

// the address in the memory is continous for all the inputs    