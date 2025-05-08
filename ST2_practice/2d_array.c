// 1)	Read and display the elements of 2D array.

// #include <stdio.h>

// int main(){
//     int rows,col;
//     scanf("%d %d", &rows, &col);
//     int arr[100][100];

//     for(int i=0; i<rows; i++){
//         for(int j=0; j<col; j++){
//             printf("Element [%d][%d]: ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     // Display the 2D array
//     printf("\nThe 2D array is:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < col; j++) {
//             printf("%d\t", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// sum and diff of matrix
#include <stdio.h>

int main(){
    int rows, cols;

    printf("enter rows: ");
    scanf("%d", &rows);
    printf("enter cols: ");
    scanf("%d", &cols);

    int A[100][100], B[100][100], sum[100][100], diff[100][100];

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // calculate sum diff
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            sum[i][j] = A[i][j] + B[i][j];
            diff[i][j] = A[i][j] - B[i][j];
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%d\t", sum[i][j]); 
        }
        printf("\n");
    }
    
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%d\t", diff[i][j]); 
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main(){
    int rows, cols;

    printf("Enter rows: ");
    scanf("%d", &rows);
    printf("Enter cols: ");
    scanf("%d", &cols);

    int A[100][100], B[100][100], sum[100][100], diff[100][100];

    // Input for matrix A
    printf("\nEnter elements of Matrix A:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Input for matrix B
    printf("\nEnter elements of Matrix B:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Calculate sum and difference
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            sum[i][j] = A[i][j] + B[i][j];
            diff[i][j] = A[i][j] - B[i][j];
        }
    }

    // Display sum
    printf("\nSum of matrices:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    // Display difference
    printf("\nDifference of matrices:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d\t", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}
