// #include <stdio.h>

// int main(){
//     int a;
//     for(a=1; a<=15; a++){
//         if(a==14 || a==15){
//             break;
//         }
//         else if(a==5 || a==10){
//             continue;
//         }
//         else{
//         printf("%d\n", a);
//         }
//     }
//     return 0;
// }

#include <stdio.h>

int main(){
    int i=32, j=32,k,l,m;
    k=i|j;
    l=i&j;
    m=k^j;
    printf("%d %d %d %d %d", i, j, k, l, m);
    return 0;
}