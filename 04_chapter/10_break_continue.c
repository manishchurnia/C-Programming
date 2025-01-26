// #include <stdio.h>

// int main(){
//     int i;
//     for(i = 18; i<50; i++){
//         if(i==34){
//             break; //(break)exits the loop.
//         }
//         printf("%d\n", i);
//     }
//     return 0;
// }

#include <stdio.h>

int main(){
    int i;
    for(i = 18; i<50; i++){
        if(i==45){
            continue; //(continue)skips the current iteration.
        }
        printf("%d\n", i);
    }
    return 0;
}