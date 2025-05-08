// write a program to take string as an input from the user using %c and %s confirm that the strings are equal 

// #include <stdio.h>

// int main(){
//     char str[6];
//     // scanf("%s", str);
//     // printf("%s", str);
//     for(int i = 0; i < 6; i++){
//         scanf("%c", &str[i]);
//         fflush(stdin);
//     }
//     str[6] = '\0';
//     printf("%s", str);
//     return 0;
// }

//write your own version of strlen function from <string.h>

// #include <stdio.h>

// int strlen(char str[]){
//     int i = 0, count;
//     char c = str[i];
//     while(c!='\0'){
//         c = str[i];
//         i++;
//     }
//     return count = i-1;
// }
// int main(){
//     char str[] = "manish";
//     printf("%d", strlen(str));
//     return 0;
// }

// write a function slice() to slice a string. it should change the original string such that it is now the sliced string. take 'm' and 'n' for start and ending position for slice. 
// write a program to count the occurence of a given character in a string.

// #include <stdio.h>

// int count_char(char str[], char ch){
//     int count = 0;
//     for(int i = 0; str[i] != '\0'; i++){
//         if(str[i] == ch){
//             count++;
//         }
//     }
//     return count;
// }
// int main(){
//     char str[100], ch;
    
//     // Input string and character
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);  // Use fgets to include spaces
    
//     printf("Enter a character to count: ");
//     scanf("%c", &ch);
    
//     // Count occurrences of the character
//     int result = count_char(str, ch);
    
//     // Output the result
//     printf("The character '%c' appears %d times in the string.\n", ch, result);
//     return 0;
// }

// write a program to check whether a character is present in a given string or not.
#include <stdio.h>

int is_character_present(char str[], char ch) {
    // Loop through the string and check for the character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            return 1;  // Character found
        }
    }
    return 0;  // Character not found
}

int main() {
    char str[100], ch;
    
    // Input string and character
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Use fgets to include spaces
    
    printf("Enter a character to check: ");
    scanf("%c", &ch);
    
    // Check if the character is present
    if (is_character_present(str, ch)) {
        printf("The character '%c' is present in the string.\n", ch);
    } else {
        printf("The character '%c' is not present in the string.\n", ch);
    }
    
    return 0;
}
