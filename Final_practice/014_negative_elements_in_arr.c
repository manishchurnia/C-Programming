//print negative elements in an array

#include <stdio.h>

int main(){
    int n;

    printf("enter number of elements of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("enter elements of array:\n ");
    for(int i=0; i<n; i++){
        printf("enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        if(arr[i]<0){
            printf("%d", arr[i]);
        }
    }
    
    return 0;
}