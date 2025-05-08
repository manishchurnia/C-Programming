#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("manish.txt", "a"); //if we wanna write somethin then we use w instead of append(a)...in writing file it resets the whole file then write but in append it add the value at the end of the file.
    int num = 432;
    fprintf(fptr, "%d", num);
    fclose(fptr);

    return 0;
}