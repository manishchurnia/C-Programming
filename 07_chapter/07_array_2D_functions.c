#include <stdio.h>

int main(){
    int arr[3][2];
    for(int i = 0; i<3; i++){
        for(int j = 0; j<2; j++){
            printf("Enter the value of arr[%d][%d]\n", i,j);
            scanf("%d \n", &arr[i][j]);
        }
    }
    // for(int i = 0; i<3; i++){
    //     for(int j = 0; j<2; j++){
    //         printf("the value of arr[%d][%d] is %d\n", i,j, arr[i][j]);
    //     }
        // OR
        for(int i = 0; i<3; i++){
        for(int j = 0; j<2; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//passing array to function
/*printArray(arr, n);
  void printArray(int *i, int n);
  OR...
  void printArray(int i[], int n);*/