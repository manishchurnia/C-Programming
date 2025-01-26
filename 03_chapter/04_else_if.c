// important note
// the last 'else' is optional
// there can be any number of 'else-if'
// the last 'else' is executed only if all upper conditions fails
// if first 'if' conditions is true it can't check other lower statements

#include <stdio.h>

int main(){
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    if(age > 60){
        printf("you can drive but you are senior citizen\n");
    }
    else if(age > 40){
        printf("you can drive but you are elder\n");
    }
    else if(age >= 18){
        printf("you can drive\n");
    }
    else if(age >= 16){
        printf("you can drive but you must have learning licence\n");
    }
    else{
        printf("you can't drive\n");
    }
    return 0;
}