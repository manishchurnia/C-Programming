// logical operators
// consider 1 as True and 0 as False
// (&&)AND --> returns True when both conditions are True means both conditions are 1 and 1
// (||)OR --> returns True when atleast one of the conditions are True otherwise returns False
// (!)NOT --> return True if given False and returns False if given True

#include <stdio.h>

int main(){
    int a = 1; int b = 1;
    printf("the value of a and b is %d\n", a&&b);
    printf("the value of a and b is %d\n", a||b);
    printf("the value of a and b is %d\n", !b);

    if(a&&b){
        printf("both are true\n");
    }
    // is same as writing...
    if(a){
        if(b){
            printf("both are true\n");
        }
    }
    return 0;
}

