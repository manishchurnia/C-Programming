// #include <stdio.h>

// int main(){
//     int a;
//     printf("enter a number: ");
//     scanf("%d", &a);
//     if(a<=1){
//         printf("Not a prime number\n");
//     }
//     else if(a==2|| a==3 || a==5 || a==7){
//         printf("Is a prime number\n");
//     }
//     else if(a%2==0 || a%3==0 || a%5==0 || a%7==0){
//         printf("Not a prime number\n ");
//     }
//     else{
//         printf("Is a prime number");
//     }
//     return 0;
// }

// OR

#include <stdio.h>

int main(){
    int a, isprime = 1;
    printf("enter number: ");
    scanf("%d", &a);
    if(a<=1){
        isprime = 0;
    }
    else{
        for(int i=2; i*i<=a; i++){
            if(a%i==0){
                isprime=0;
            }
        }
    }

    if(isprime){
        printf("is a prime number");
    }
    else{
        printf("not a prime number");
    }
    return 0;
}
