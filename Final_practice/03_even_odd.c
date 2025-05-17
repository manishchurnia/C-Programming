// print even numbers upto n

#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    
    for (i = 2; i <= n; i += 2) {
        printf("%d ", i);
        
    }
    printf("\n");
    return 0;
}

// // sum of natural numbers upto n

#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    int sum = 0;
    for(int i =1; i<=a ; i++){
        sum+=i;
    }
    printf("%d", sum);
    return 0;
}   

// sum of digits of a number

#include <stdio.h>

int main(){
    int a, sum=0;
    scanf("%d", &a);
    while(a!=0){
        sum+=a%10;
        a/=10;
    }
    printf("%d", sum);
    return 0;
}