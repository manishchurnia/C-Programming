// #include <stdio.h>

// int main(){
//     int a = 3;
//     while(a<10){
//         printf("%d\n", a);
//         a++;
//     }
//     return 0;
// }

#include <stdio.h>

int main (){
    int n,i,result;
    scanf("%d", &n);
    result = 1;
    for(i=1; i<=10; i++){
        result*=i;
        printf("%d X %d = %d\n", n, i, result);
    }
    return 0;
}