#include <stdio.h>

unsigned long long fact(int n){
    if(n==0 || n==1){
       return 1; 
    }
    return n * fact(n-1);
}

int main(){
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    printf("the factorial of %d is: %llu", a, fact(a));
    return 0;
} 

//printing even numbers upto n
// #include <stdio.h>

// int main() {
//     int n, i;
//     scanf("%d", &n);
    
//     for (i = 2; i <= n; i += 2) {
//         printf("%d ", i);
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

    
//     if (num <= 1){
//         printf("%d is not a prime number.\n", num);
//     }
//     else if (num == 2 || num == 3 || num == 5 || num == 7){
//         printf("%d is a prime number.\n", num);
//     }
//     else if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0){
//         printf("%d is not a prime number.\n", num);
//     }
//     else{
//         printf("%d is a prime number.\n", num);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n,i;
//     printf("enter a number:");
//     scanf("%d", &n);
//     int sum=0;
//     for(i=0; i<=n; i++){
//         sum+=i;
//     }
//     printf("%d", sum);
//     return 0;
// }

//sum of digits of a number
// #include <stdio.h>

// int main(){
//     int num,sum=0,i;
//     scanf("%d", &num);
//     while(num!=0){
//         i=num%10;
//         sum+=i;
//         num/=10;
//     }
//     printf("%d", sum);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int year;
//     scanf("%d", &year);
//     if(year%4==0 && year%100!=0 || year%400==0){
//         printf("leap year");
//     }
//     else{
//         printf("not leap year\n");
//     }
//     return 0;
// }
