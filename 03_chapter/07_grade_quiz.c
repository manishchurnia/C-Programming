// program to grade student on the basis of their marks out of 100

#include <stdio.h>

int main(){
    int grade;
    printf("enter marks of student out of 100: ");
    scanf("%d", &grade);
    if(grade >= 90 && grade <= 100){
        printf("your grade is A\n");
    }
    else if(grade >= 80 && grade < 90){
        printf("your grade is B\n");
    }
    else if(grade >= 70 && grade < 80){
        printf("your grade is C\n");
    }
    else if(grade >= 60 && grade < 70){
        printf("your grade is D\n");
    }
    else if(grade >= 50 && grade < 60){
        printf("your grade is B\n");
    }
    else{
        printf("your grade is F\n");
    }
    return 0;
}