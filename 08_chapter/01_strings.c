#include <stdio.h>

int main(){
    char st[] = {'a', 'b', 'c', '\0'}; // \0 is used to terminate string...its null character
    // char st[] = "manish"; same as upper
    for(int i = 0; i<3; i++){
        printf("characters are: %c\n", st[i]);
    }
    // printf("%s", st[]);
    return 0;
}

// %s format specifier entire string.