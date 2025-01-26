#include <stdio.h>

int main(){
    int a = 10;
    for (int i = 4; i<a; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
// rules of for loop
// initialize --> setting a loop count for initial value.(int i = 10)
// test --> checking a condition.(i<a)
// increment --> updating the loop counter.(i++)