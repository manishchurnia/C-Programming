// important note
/*the condition can be any valid expression.In C a non-zero value is considered to
true as you can see in the expression given */
#include <stdio.h>

int main(){
    if(5){
        printf("this if is executed\n");
    }
    if(5.5){
        printf("this if is also executed\n");
    }
    if("y"){
        printf("this if is also executed\n");
    }
    if(0){
        printf("this if is not executed\n");
    }
    return 0;
}