#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // initialize random number generator
    // Without srand(), the sequence of random numbers is the same every time you run the program.
    // srand(time(0)) ensures the seed is different on each run, so the random numbers will vary.
    srand(time(0));
    int guessed_number;
    int num_of_guesses = 0;

    // generate random number between 1 and 100
    // because here the rand() funtion a 4 digit random number
    int randomnumber = (rand()%100) + 1;
    // printf("%d\n", randomnumber);

    do{
        printf("guess a number between 1 to 100: ");
        scanf("%d", &guessed_number);
        if(guessed_number > randomnumber){
            printf("guessed_number is too higher\n");
        }
        else if(guessed_number < randomnumber){
            printf("guessed_number is too lower\n");
        }
        else{
            printf("congrats! you gussed it.\n");
        }
        num_of_guesses++;
    }while(guessed_number != randomnumber);

    printf("you have gussed the number in %d guesses", num_of_guesses);
    return 0;
}