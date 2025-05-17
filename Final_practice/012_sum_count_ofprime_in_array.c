// Write a C program to count and print the sum of prime elements in an array.

#include <stdio.h>

int prime(int n){
    if(n<=1){
        return 0; //not prime
    }
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return 0; //not prime
        }
    }
    return 1;  //prime
}
int main(){
    int n, sum=0, count=0;

    printf("enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    printf("enter elememts of array:\n");
    for(int i=0; i<n; i++){
        printf("enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        if(prime(arr[i])){
            sum+=arr[i];
            count+=1;
        }
    }
    printf("sum: %d\n", sum);
    printf("count: %d\n", count);
    return 0;
}