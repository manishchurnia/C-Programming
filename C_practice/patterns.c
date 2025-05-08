// #include <stdio.h>

// int main(){
//     int a;
//     scanf("%d", &a);
//     for(int i=0; i<a; i++){ //for rows
//         for(int j=0; j<=a; j++){ //for coloumns
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main () {
//     int a;
//     scanf("%d", &a);
//     for(int i=1; i<=a; i++){ //for rows
//         for(int j=0; j<(a-i); j++){ //for spaces
//             printf("  ");
//     }
//     for(int j=1; j <=(2*i - 1); j++){
//         printf("%d ", j);
//     }
//     printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main () {
//     int a;
//     scanf("%d", &a);
//     for(int i=1; i<=a; i++){//for rows
//         for(int j=1; j<=i; j++){ // for printing numbrers in increasing order in coloumns
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main () {
//     int a;
//     scanf("%d", &a);
//     for(int i=1; i<=a; i++){//for rows
//         for(int j=1; j<=i; j++){ // for printing numbrers in increasing order in coloumns
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main () {
//     int a;
//     scanf("%d", &a);
//     for(int i=a; i>=1; i--){//for rows
//         for(int j=1; j<=i; j++){ // for printing numbrers in increasing order in coloumns
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main () {
//     int a;
//     scanf("%d", &a);
//     for(int i=a; i>=1; i--){//for rows
//         for(int j=1; j<=i; j++){ // for printing numbrers in increasing order in coloumns
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main () {
//     int a;
//     scanf("%d", &a);
//     for(int i=a; i>=1; i--){//for rows
//         for(int j=a; j>=a-i+1; j--){ // for printing numbrers
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main () {
    int a;
    scanf("%d", &a);
    for(int i=1; i<=a; i++){ //for rows
        for(int j=0; j<(a-i); j++){ //for spaces
            printf("  ");
    }
    for(int j=1; j <=(2*i - 1); j++){
        printf("* ");
    }
    printf("\n");
    }
    return 0;
}