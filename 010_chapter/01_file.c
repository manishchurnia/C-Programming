#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("manish.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("the value of num is %d ",num);//if we run this code again this gives me the next number becaouse in file cursor moves continousaly.
    fscanf(ptr, "%d", &num);
    printf("the value of num is %d ",num);
    fclose(ptr);
    return 0;
}

