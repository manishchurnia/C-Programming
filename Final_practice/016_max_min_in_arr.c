// 3.	Write a C program to find maximum and minimum element in an array.

#include <stdio.h>

int main(){
    int arr[100], i, n;

    printf("enter number of elements: ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
    
    return 0;
}