#include <stdio.h>
#include <string.h>

int main(){
    int arr1[100], arr2[100];
    int i, n;

    printf("enter number of elements in an array : ");
    scanf("%d", &n);

    printf("enter elements in an array : \n");
    for(i=0; i<n; i++){
        printf("enter elements %d: ", i+1);
        scanf("%d", &arr1[i]);
    }

    memcpy(arr2, arr1, n*sizeof(int));

    printf("copied elements in 2nd array is:\n");
    for(i=0; i<n; i++){
        printf("Element %d: ", i + 1);
        printf("%d\n", arr2[i]);
    }

    return 0;
}