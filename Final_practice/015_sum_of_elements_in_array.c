// Write a C program to find sum of all array elements. 

#include <stdio.h>

int main(){
    int n, sum=0;

    printf("enter number of elements of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("enter elements of array:\n ");
    for(int i=0; i<n; i++){
        printf("enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        sum+=arr[i];
    }

    printf("%d", sum);

    return 0;
}