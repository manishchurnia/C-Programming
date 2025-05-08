#include <stdio.h>

int main(){
    char st[30];
    gets(st); // the entered string is stored in st
    printf("%s\n", st);
    puts(st); // prints the str and places the cursor on next line
    printf("cricket is best sport");
    return 0;
}