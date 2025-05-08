// #include <stdio.h>

// int main(){
//     int arr[] = {10,20,30,40,50};
//     printf("Address of arr[0]: %p\n", &arr[0]);
//     printf("Address of arr[1]: %p\n", &arr[1]);
//     printf("Address of arr[2]: %p\n", &arr[2]);
//     printf("value of arr[0]: %d\n", arr[0]);
//     return 0;
// }

// 1.	Write a C program to print all negative elements in an array.

// #include <stdio.h>

// int main(){
//     int arr[100], i, n;

//     printf("enter number of elements: ");
//     scanf("%d", &n);

//     if (n <= 0 || n > 100) {
//         printf("Invalid number of elements. Please enter a value between 1 and 100.\n");
//         return 1; 
//     }

//     for(i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }

//     // Print negative elements
//     printf("Negative elements in the array are:\n");
//     for(i=0; i<n; i++){
//         if(arr[i]<0){
//             printf("%d", arr[i]);
//         }
//     }

//     return 0;
// }

// 2.	Write a C program to find sum of all array elements. 

// #include <stdio.h>

// int main(){
//     int arr[100], i, n;
//     printf("enter num of elements: ");
//     scanf("%d", &n);

//     for(i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }
//     int sum = 0;
//     for(i=0; i<n; i++){
//         sum+=arr[i];
//     }
//     printf("%d", sum);
//     return 0;
// }

// 3.	Write a C program to find maximum and minimum element in an array.

// #include <stdio.h>

// int main(){
//     int arr[100], i, n;

//     printf("enter number of elements: ");
//     scanf("%d", &n);
    
//     for(i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }

//     // initialize max and min element in array
//     int max = arr[0];
//     int min = arr[0];
    
//     for(int i=0; i<n; i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//         if(arr[i] < min){
//             min = arr[i];
//         }
//     }
//     printf("Maximum element: %d\n", max);
//     printf("Minimum element: %d\n", min);
    

//     return 0;
// }

// 4.	Write a C program to find second largest element in an array.

// #include <stdio.h>

// int main(){
//     int arr[100], i, n;

//     printf("enter number of elements: ");
//     scanf("%d", &n);

//     for(i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }
     
//     int max = arr[0];
//     int second_largest = arr[1];


//     return 0;
// }

// 5.	Write a C program to count total number of even and odd elements in an array.

// #include <stdio.h>

// int main(){
//     int arr[100], i, n;

//     printf("enter number of elements: ");
//     scanf("%d", &n);

//     for(i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }

//     for(i=0; i<n; i++){
//         if(arr[i]%2 == 0){
//             printf("%d is a even number\n", arr[i]);
//         }
//         else{
//             printf("%d is odd number\n", arr[i]);
//         }
//     }
//     return 0;
// }

// OR

// #include <stdio.h>

// int main(){
//     int arr[100], i, n;

//     printf("enter number of elements: ");
//     scanf("%d", &n);

//     for(i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }
//     int even_numbers = 0;
//     int odd_numbers = 0;
//     for(i=0; i<n; i++){
//         if(arr[i]%2 == 0){
//             even_numbers+=1;
            
//         }
//         else{
//             odd_numbers+=1;
            
//         }
//     }
//     printf("%d\n", even_numbers);
//     printf("%d\n", odd_numbers);
//     return 0;
// }

// 6.	Write a C program to count total number of negative elements in an array.

// #include <stdio.h>

// int main(){
//     int arr[100], i, n;

//     printf("enter number of elements: ");
//     scanf("%d", &n);

//     for(i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }

//     int negative_numbers = 0;

//     for(i=0; i<n; i++){
//         if(arr[i]%2 == 0){
//             negative_numbers+=1;
//         }
//     }
//     printf("%d\n", negative_numbers);
//     return 0;
// }

// 7.	Write a C program to copy all elements from an array to another array.

#include <stdio.h>
#include <string.h>

int main(){
    int arr1[100]; int arr2[100];
    int i, n;

    printf("enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i=0; i<n; i++){
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Understanding the Parameters in Your Code:
    // arr2: Destination array where the elements will be copied to.​
    // arr1: Source array from which the elements will be copied.​
    // n * sizeof(int): Total number of bytes to copy. Since n represents the number of int elements, multiplying by sizeof(int) calculates the total byte size of these elements.
    memcpy(arr2, arr1, n*sizeof(int));

    printf("copied elements in 2nd array is:\n");
    for(i=0; i<n; i++){
        printf("Element %d: ", i + 1);
        printf("%d\n", arr2[i]);
    }
    printf("\n");
    return 0;
}


// 16.	Write a C program to count and print the sum of prime elements in an array.

// #include <stdio.h>

// Function to check if a number is prime

// #include <stdio.h>

// int prime(int n){
//     if(n<2){
//         return 0;
//     }
//     for(int i=2; i * i<=n; i++){
//         if(n%i == 0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int a;
//     scanf("%d", &a);
//     if(prime(a)){
//         printf("%d is a prime number", a);
//     }
//     else{
//         printf("%d is not a prime number", a);
//     }
//     return 0;
// }

// 16.	Write a C program to count and print the sum of prime elements in an array.


// #include <stdio.h>

// int prime(int n){
//     if(n<2){
//         return 0;
//     }
//     for(int i=2; i * i<=n; i++){
//         if(n%i == 0){
//             return 0;
//         }
//     }
//     return 1;
// }

// int main(){
//     int n, i, sum=0, count=0;
    
//     printf("enter the number of elements in the array: ");
//     scanf("%d", &n);

//     int arr[n];

//     printf("enter elements of array:\n");
//     for(i=0; i<n; i++){
//         printf("enter element %d:", i+1);
//         scanf("%d", &arr[i]);
//     }

//     for(i=0; i<n; i++){
//         if(prime(arr[i])){
//             sum+=arr[i];
//             count++;
//         }
//     }

//     printf("Count of prime numbers: %d\n", count);
//     printf("Sum of prime numbers: %d\n", sum);

//     return 0;
// }

// write a c program to sort elements in an array in assesding order

// #include <stdio.h>

// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++)
//         for (int j = 0; j < n - i - 1; j++)
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
// }

// int main() {
//     int n, arr[100];

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     printf("Enter elements: ");
//     for(int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }
//     bubbleSort(arr, n);
//     printf("Sorted array: ");
//     for (int i = 0; i < n; i++){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// for descending order sorting
// #include <stdio.h>

// void bubblesort(int arr[], int n){
//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(arr[j] < arr[j+1]){ //if(arr[j] < arr[j+1]) just this change 
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }
// int main(){
//     int arr[100], n;

//     printf("enter the number of elements: ");
//     scanf("%d", &n);

//     for(int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }
    
//     bubblesort(arr, n);

//     for(int i=0; i<n; i++){
//         printf("%d", arr[i]);
//     }
//     return 0;
// }

// linear search in array

// #include <stdio.h>

// // Function to perform Linear Search
// int linearSearch(int arr[], int size, int key) {
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == key) {
//             return i; // Return the index where the key is found
//         }
//     }
//     return -1; // Return -1 if the key is not found
// }

// int main() {
//     int n, key, result;
    
//     // Taking array size as input
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);
    
//     int arr[n];
    
//     // Taking array elements as input
//     printf("Enter %d elements: ", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     // Taking the key to be searched
//     printf("Enter the element to search: ");
//     scanf("%d", &key);
    
//     // Performing Linear Search
//     result = linearSearch(arr, n, key);
    
//     if (result != -1) {
//         printf("Element found at index %d\n", result);
//     } else {
//         printf("Element not found in the array\n");
//     }
    
//     return 0;
// }

#include <stdio.h>

// Function to perform Linear Search
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Return the index where the key is found
        }
    }
    return -1; // Return -1 if the key is not found
}

int main() {
    int n, key, result;
    
    // Taking array size as input
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Taking array elements as input
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Taking the key to be searched
    printf("Enter the element to search: ");
    scanf("%d", &key);
    
    // Performing Linear Search
    result = linearSearch(arr, n, key);
    
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }
    
    return 0;
}