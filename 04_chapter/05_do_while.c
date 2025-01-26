// it is diffrent from while loop because...
// 'while' checks the condition and then executes the code.
// 'do-while' executes the code and then checks the condition.
// 'do-while' runs the code atleast once.
#include <stdio.h>

int main(){
    int i = 0;
    do{
        printf("the value of i is %d\n", i);
        i++;
    } while (i < 9);
    return 0;
}