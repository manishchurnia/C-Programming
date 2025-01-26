// decisions making instructions in c
// if-else statement

// relational operators
/*"=" use for assignment... "==" use for equality check... ">=" use for greater 
than equals to... "!=" use for not equals to...*/ 

#include <stdio.h>

int main(){
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    if(age>=18){
        printf("you can drive\n");
    }
    else{ // i can also put an additional if statement here i.e. if(age<18)
        printf("you can't drive\n");
    }
    return 0; //if i put any char in input it gives me the "you can drive" output because scanf if don't understand any other than int.
}




#include <stdio.h>

int main(){
    int rup;
    scanf("%d", &rup);
    if(rup < 1000){
        printf("you are poor");
    }
    if(rup > 1000){
        printf("you are rich");
    }
    return 0;
}


