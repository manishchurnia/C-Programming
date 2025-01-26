/* in this switch statement if I entered 2 in the input than it will execute all the
   expression mentioned below case 2 inculding the case 2 expression that's why we use break 
   statement here so that if any value match it execute only that value. */


#include <stdio.h>

int main(){
    int a;
    printf("enter value of a: ");
    scanf("%d", &a);
    switch(a){
        case 1 :
            printf("you entered 1\n");
            break;
        case 2:
            printf("you entered 2\n");
            break;
        case 3:
            printf("you entered 3\n");
            break;
        case 4:
            printf("you entered 4\n");
            break;
        default:
            printf("nothing matched\n");
    }
    return 0;
}