#include <stdio.h>

int reversed(int n){
    int remainder, reversed=0;
    while(n>0){
        remainder=n%10;
        reversed=(reversed*10)+remainder;
        n/=10;
    }
    return reversed;
}
int main(){
    int num;
    printf("enter number: ");
    scanf("%d", &num);
    printf("%d", reversed(num));
    return 0;
}

// or

#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int len = strlen(str);
    for(int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char numStr[20];
    printf("Enter number: ");
    scanf("%s", numStr);  // Read as string
    reverseString(numStr);
    return 0;
}