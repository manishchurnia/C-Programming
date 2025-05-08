// palindrome number

#include <stdio.h>

// Function to check if a number is a palindrome
int is_palindrome(int num) {
    int originalNum = num, reversedNum = 0, remainder;
    
    // Reverse the number
    while (num > 0) {
        remainder = num % 10;  // Get last digit
        reversedNum = (reversedNum * 10) + remainder;  // Build reversed number
        num /= 10;  // Remove last digit
    }

    // Check if reversed number is equal to original
    return (originalNum == reversedNum);
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_palindrome(num))
        printf("%d is a Palindrome number.\n", num);
    else
        printf("%d is not a Palindrome number.\n", num);

    return 0;
}

// armstrong number

#include <stdio.h>
#include <math.h>

// Function to check if a number is Armstrong
int is_armstrong(int num) {
    int originalNum = num, sum = 0, digits = 0, remainder;
    
    // Count the number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    // Compute sum of digits raised to the power of digits
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;  // Get last digit
        sum += pow(remainder, digits); // Raise to power and add to sum
        temp /= 10;  // Remove last digit
    }

    // Check if sum equals original number
    return (sum == originalNum);
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_armstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}



