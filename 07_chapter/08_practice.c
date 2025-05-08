//create an array of 10 numbers. verify using pointer arithmetic that(ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.

#include <stdio.h>

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = a;
    printf("the value at address %u is %d", ptr+2, *(ptr+2));
    return 0;
}

//write an program to create an array of 10 integers and store multiplication table of 5 in it

#include <stdio.h>

int main(){
    int arr[10];
    for(int i=0; i<10; i++){
        arr[i] = 5*(i+1);
    }
    for(int i=0; i<10; i++){
        printf("the value of 5 X %d = %d\n", i+1, arr[i]);
    }
   
    return 0;
}

// now by taking user input 

#include <stdio.h>

int main(){
    int arr[10], n;
    scanf("%d", &n);
    for(int i=0; i<10; i++){
        arr[i] = n*(i+1);
    }
    for(int i=0; i<10; i++){
        printf("the value of %d X %d = %d\n", n, i+1, arr[i]);
    }
    
    return 0;
}


// write a program containing functions which reverse the array passed to it.

#include <stdio.h>

void printArray(int arr[],int n){
    for(int i = 0; i<n; i++){
    printf("%d ", arr[i]);
    }
    printf("\n");
}

int reverse(int arr[], int n){
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    printArray(arr, 6);
    reverse(arr, 6);
    printArray(arr, 6);
    return 0;
}

/*How it works step-by-step:
Let’s take an example with an array of 6 elements: {1, 2, 3, 4, 5, 6}.

The process of swapping will look like this:

First Iteration (i = 0):

temp = arr[0] = 1
arr[0] = arr[5] = 6 (so now arr is {6, 2, 3, 4, 5, 1})
arr[5] = temp = 1 (so now arr is {6, 2, 3, 4, 5, 1})
Second Iteration (i = 1):

temp = arr[1] = 2
arr[1] = arr[4] = 5 (so now arr is {6, 5, 3, 4, 2, 1})
arr[4] = temp = 2 (so now arr is {6, 5, 3, 4, 2, 1})
Third Iteration (i = 2):

temp = arr[2] = 3
arr[2] = arr[3] = 4 (so now arr is {6, 5, 4, 3, 2, 1})
arr[3] = temp = 3 (so now arr is {6, 5, 4, 3, 2, 1})
Now the array is reversed: {6, 5, 4, 3, 2, 1}.

Summary:
The reverse function swaps elements from the two ends of the array and moves towards the center, ensuring the entire array gets reversed.
By iterating only up to the middle (n / 2), it avoids swapping elements twice.*/


// write a program containing functions which counts the number of positive integers in an array.

#include <stdio.h>

int count(int a[], int n){
    int no_of_positive = 0;

    for(int i = 0; i<n; i++){ 
        if(a[i] > 0){
            no_of_positive++;
      }
    }
    return no_of_positive;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8, -9,10};
    printf("the number of positive integers are %d\n", count(arr, 10));
    return 0;
}

//create an array of size 3X10cointaining multiplication table of numbers 2,7,9 respectively.

#include <stdio.h>

int main()
{
    int arr[3][10];
    int mul[] = {2, 7, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("The value of arr[i][j] is %d\n", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// by custom input

#include <stdio.h>

int main()
{
    int arr[3][10];
    int mul[3];
    printf("Enter 3 numbers to generate their multiplication tables:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Enter multiplier %d: ", i + 1);
        scanf("%d", &mul[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("The value of arr[i][j] is %d\n", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// create a 3d array and print the address of the elements in increasing order.
#include <stdio.h>

int main(){
    int arr[2][3][4];
    for(int i =0; i<2; i++){
        for(int j=0; j<3; j++){
            for(int k= 0; k<4; k++){
                printf("address of arr[%d][%d][%d] = %u\n",i,j,k, &arr[i][j][k]);
            }
        }
    }
    return 0;
}