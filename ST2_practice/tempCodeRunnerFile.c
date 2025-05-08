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
//     printf("%d", count_even);

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


// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);  // Input the size of the array

//     int arr[n], count[n];

//     // Initialize the count array with -1 (indicating elements are not yet counted)
//     for (int i = 0; i < n; i++) {
//         count[i] = -1;  
//     }
    
//     // Input the elements of the array
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     // Calculate the frequency of each element
//     for (int i = 0; i < n; i++) {
//         int freq = 1;  // Start frequency count from 1 for each element

//         for (int j = i + 1; j < n; j++) {
//             // If duplicate found, increase frequency and mark as counted
//             if (arr[i] == arr[j]) {
//                 freq++;
//                 count[j] = 0;  // Mark this index as already counted
//             }
//         }

//         // If the element was not marked as counted, store its frequency
//         if (count[i] != 0) {
//             count[i] = freq;
//         }
//     }

//     // Print elements with their frequencies
//     for (int i = 0; i < n; i++) {
//         if (count[i] != 0) {  // Only print unmarked (counted once) elements
//             printf("%d %d\n", arr[i], count[i]);
//         }
//     }

//     return 0;
// }




