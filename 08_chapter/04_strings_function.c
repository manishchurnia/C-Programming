#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Harry";
    char s1[56] = "Harry";
    char s2[56] = " bhai";

    printf("%d\n", strlen(st));
    char target[30];
    strcpy(target, st); // target now contains "Harry"
    printf("%s %s\n", st, target);

    strcat(s1, s2); // s1 now contains "helloharry" <no space in between>
    printf("%s\n", s1);
    
    int a = strcmp("deep", "joke"); //gives negative if jokes comes first in dic gives positive...if both are equal gives 0.

    printf("%d", a);

    return 0;
}