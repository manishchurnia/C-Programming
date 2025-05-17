// 5.	Write a C program to count total number of even and odd elements in an array.

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int total_even = 0;
    int total_odd = 0;

    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            printf("%d ", arr[i]);
            total_even+=1;
        }
    }
    printf("\n");
    printf("%d \n", total_even);
    
    for(int i=0; i<n; i++){
        if(arr[i]%2!=0){
            printf("%d ", arr[i]);
            total_odd+=1;
        }
    }
    printf("\n");
    printf("%d ", total_odd);
    
    return 0;
}