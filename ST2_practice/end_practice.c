// #include <stdio.h>

// int main(){
//     int arr[100], n;
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//         // Print even numbers first
//         for (int i = 0; i < n; i++) {
//             if (arr[i] % 2 == 0) {
//                 printf("%d ", arr[i]);
//             }
//         }
//         printf("\n");
//         // Print odd numbers next
//         for (int i = 0; i < n; i++) {
//             if (arr[i] % 2 != 0) {
//                 printf("%d ", arr[i]);
//             }
//         }

//     return 0;
// }

// 16.	Write a C program to count and print the sum of prime elements in an array.

// #include <stdio.h>

// int prime(int n){
//     if(n<2){
//         return 0;
//     }
//     for(int i=2; i*i<=n; i++){
//         if(n%i == 0){
//             return 0;
//         }
//     }
//     return 1;
// }


// int main(){
//     int n;

//     printf("enter number of elements:");
//     scanf("%d", &n);

//     int arr[n];

//     printf("enter elements: \n");
//     for(int i=0; i<n; i++){
//         printf("enter element %d: ", i+1);
//         scanf("%d", &arr[i]);
//     }
//     int sum=0, count=0;

//     for(int i=0; i<n; i++){
//         if(prime(arr[i])){
//             sum+=arr[i];
//             count++;
//         }
//     }

//     printf("sum of prime numbers is %d\n", sum);
//     printf("count of prime numbers %d\n", count);

//     return 0;
// }

// C program to rotate an array from Kth element

// #include <stdio.h>

// int main(){
//     int n, k;
//     printf("enter number of elements in an array");
//     scanf("%d", &n);

//     int arr[n];

//     for(int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }

//     printf("enter kth element to rotate an array");
//     scanf("%d", &k);

//     int temp[n];

//     for(int i=0; i<n; i++){
//         (temp[i+k])\n = arr[i];
//     }

//     printf("rotated array:\n");
//     for(int i=0; i<n; i++){
//         printf("%d", arr[i]);
//     }
//     return 0;
// }

// 1.	Write a C program to print all negative elements in an array.

// #include <stdio.h>


// int main(){
//     int n;

//     printf("enter number of elements in an array: ");
//     scanf("%d", &n);

//     int arr[n];

//     printf("enter elements of array:\n");
//     for(int i=0; i<n; i++){
//         printf("enter element %d: ", i+1);
//         scanf("%d", &arr[i]);
//     }

//     for(int i=0; i<n; i++){
//         if(arr[i]<0){
//             printf("%d ", arr[i]);
//         }
//     }
    
//     return 0;
// }

// 2.	Write a C program to find sum of all array elements. 

// #include <stdio.h>


// int main(){
//     int n;

//     printf("enter number of elements in an array: ");
//     scanf("%d", &n);

//     int arr[n];

//     printf("enter elements of array:\n");
//     for(int i=0; i<n; i++){
//         printf("enter element %d: ", i+1);
//         scanf("%d", &arr[i]);
//     }

//     int sum = 0;

//     for(int i=0; i<n; i++){
//         sum+=arr[i];
//     }

//     printf("sum of elements of array is: %d", sum);
    
//     return 0;
// }

// 3.	Write a C program to find maximum and minimum element in an array.

// #include <stdio.h>

// int main(){
//     int n;
//     printf("enter number of elements in an array: ");
//     scanf("%d", &n);

//     int arr[n];

//     printf("enter elements of array:\n");
//     for(int i=0; i<n; i++){
//         printf("enter element %d: ", i+1);
//         scanf("%d", &arr[i]);
//     }

//     int max = arr[0];

//     int min = arr[0];

//     for(int i=0; i<n; i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//         if(arr[i]<min){
//             min = arr[i];
//         }
//     }

//     int count_max=0;
//     int count_min=0;

//     for(int i=0; i<n; i++){
//         if(arr[i]==min){
//             count_min++;
//         }
//     }

//     for(int i=0; i<n; i++){
//         if(arr[i]==max){
//             count_max++;
//         }
//     }

//     printf("%d\n", max);
//     printf("%d\n", count_max);
//     printf("%d\n", min);
//     printf("%d", count_min);

//     return 0;
// }


// 5.	Write a C program to count total number of even and odd elements in an array.

// #include <stdio.h>

// int main(){
//     int n;

//     printf("enter number of elements in an array: ");
//     scanf("%d", &n);
//     int arr[n];

//     printf("enter elements of array:\n");
//     for(int i=0; i<n; i++){
//         printf("enter elment %d: ", i+1);
//         scanf("%d", &arr[i]);
//     }

//     int count_even=0;
//     int count_odd=0;

//     // for printing even
//     for(int i=0; i<n; i++){
//         if(arr[i]%2==0){
//             printf("%d ", arr[i]);
//         }
//     }

//     // print count of even
//     for(int i=0; i<n; i++){
//         if(arr[i]%2==0){
//             count_even++;
//         }
//     }
//     printf("\n");
//     printf("%d\n", count_even);

//     // for printing odd
//     for(int i=0; i<n; i++){
//         if(arr[i]%2!=0){
//             printf("%d ", arr[i]);
//         }
//     }

//     // print count of odd
//     for(int i=0; i<n; i++){
//         if(arr[i]%2!=0){
//             count_odd++;
//         }
//     }
//     printf("\n");
//     printf("%d", count_odd);
//     return 0;
// }



// find frequency of elemenrt in array  

// 7.	Write a C program to copy all elements from an array to another array.

// #include <stdio.h>
// #include <string.h>

// int main(){
//     int n;

//     printf("enter number of elements in an array: ");
//     scanf("%d", &n);
//     int arr[n];
//     int arr2[n];

//     printf("enter elements of array:\n");
//     for(int i=0; i<n; i++){
//         printf("enter elment %d: ", i+1);
//         scanf("%d", &arr[i]);
//     }

//     memcpy(arr2, arr, n*sizeof(int));
//     printf("copied elements of array:\n");
//     for(int i=0; i<n; i++){
//         printf("%d ", arr2[i]);
//     }

//     return 0;
// }


// sort array in ascending order

// #include <stdio.h>

// void bubbleSort(int arr[], int n){
//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
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


// sort array in descending order

// #include <stdio.h>

// void bubbleSort(int arr[], int n){
//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(arr[j]<arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
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

// program to check prime number

// #include <stdio.h>

// int isprime(int n){
//     if(n<2){
//         return 0;
//     }
//     for(int i=2; i*i<=n; i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }

// int main(){
//     int a;
//     scanf("%d", &a);
//     if(isprime(a)){
//         printf("%d is a Prime Number", a);
//     }
//     else {
//         printf("%d is Not a Prime Number", a);
//     }
//     return 0;
// }

// print prime numbers in range a b

// #include <stdio.h>

// int printprimeinrange(int n){
//     if(n<2){
//         return 0;
//     }
//     for(int i=2; i*i<=n; i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }

// int main(){
//     int a, b;
//     printf("enter values of a and b");
//     scanf("%d %d", &a, &b);

//     for(int i=a; i<=b; i++){
//         if(printprimeinrange(i)){
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }




