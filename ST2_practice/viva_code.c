// print all unique elements of an array

// #include <stdio.h>

// int main() {
//     int n;
//     printf("enter no. of elements of array: ");
//     scanf("%d", &n);  

//     int arr[n];
    
//     printf("enter elements of array:\n");
//     for (int i = 0; i < n; i++) {
//         printf("element %d :", i+1);  
//         scanf("%d", &arr[i]);
//     }
    
//     for (int i = 0; i < n; i++) {
//         int count = 0;
    
//         for (int j = 0; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 count++;
//             }
//         }
//         if (count == 1) {
//             printf("%d ", arr[i]);
//         }
//     } 
//     return 0;
// }


// OR
// #include <stdio.h>

// int main(){
//     int a,b;
//     printf("enter value of a and b:");
//     scanf("%d %d", &a, &b);
//     printf("%d", a|b);
//     return 0;
// }

// AND
// #include <stdio.h>

// int main(){
//     int a,b;
//     printf("enter value of a and b:");
//     scanf("%d %d", &a, &b);
//     printf("%d", a&b);
//     return 0;
// }

// XOR
// #include <stdio.h>

// int main(){
//     int a,b;
//     printf("enter value of a and b:");
//     scanf("%d %d", &a, &b);
//     printf("%d", a^b);
//     return 0;
// }

// NOT
// #include <stdio.h>

// int main(){
//     int b;
//     printf("enter value of a and b:");
//     scanf("%d", &b);
//     printf("%d", ~b);
//     return 0;
// }

// decimal to binary

// #include <stdio.h>

// int main() {
//     int decimal, binary[32], i = 0;

//     // Input decimal number
//     printf("Enter a decimal number: ");
//     scanf("%d", &decimal);

//     // Convert to binary
//     if (decimal == 0) {
//         printf("Binary: 0\n");
//         return 0;
//     }

//     while (decimal > 0) {
//         binary[i] = decimal % 2;
//         decimal /= 2;
//         i++;
//     }

//     // Print binary number in reverse
//     printf("Binary: ");
//     for (int j = i - 1; j >= 0; j--) {
//         printf("%d", binary[j]);
//     }
//     printf("\n");

//     return 0;
// }

// binary to decimal
// #include <stdio.h>

// int main() {
//     long long binary;
//     int decimal = 0, base = 1, digit;

//     printf("Enter a binary number: ");
//     scanf("%lld", &binary); // Input binary number as a whole number

//     while (binary > 0) {
//         digit = binary % 10;         // Get the last digit
//         decimal += digit * base;     // Add digit * current power of 2
//         base = base * 2;             // Move to next power of 2 (2, 4, 8...)
//         binary = binary / 10;        // Remove the last digit
//     }

//     printf("Decimal: %d\n", decimal);
//     return 0;
// }


