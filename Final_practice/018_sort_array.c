// // write a c program to sort elements in an array in assesding order

// #include <stdio.h>

// void bubblesort(int arr[], int n){
//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(arr[j]> arr[j+1]){
//             int temp = arr[j];
//             arr[j] = arr[j+1];
//             arr[j+1] = temp;
//             }
//         }
//     }
// }

// int main(){
//     int n;

//     scanf("%d", &n);

//     int arr[n];

//     for(int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }
//     bubblesort(arr, n);
//     printf("sorted array in acsending order: \n");
//     for(int i=0; i<n; i++){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }


//write a c program to sort elements in an array in descending order

#include <stdio.h>

void bubblesort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]< arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int n;

    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    bubblesort(arr, n);
    printf("sorted array in descending order: \n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}