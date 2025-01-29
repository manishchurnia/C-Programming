#include <stdio.h>

int main(){
    int a = 9;
    int* j = &a;
    int** k = &j;

    // 5/5 cuts and gives 1 vaise hi * and & cut jaate h and gives 1

    printf("the value of a is %d\n", a);
    printf("the value of a is %d\n", *j);
    printf("the value of a is %d\n", *(&a)); // yaha bhi * and & cut jaenge or bas a reh jaega
    printf("the value of a is %d\n", **(&j)); //yaha bhi same hoga
    return 0;
}
//all line of code gives output 1