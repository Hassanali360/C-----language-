#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

    srand(time(0));
    int noofguess = 0;
    int guessed_no;

    int randomNumber = (rand() % 100) + 1; // Generate a random number between 1 and 100

  //  printf("Generated random number is %d\n", randomNumber);



  do
  {
    /* code */
  printf("Guess a number between 1 and 100: ");
  scanf("%d", &guessed_no);
  if(guessed_no > randomNumber){
    printf("Too high! Try again.\n");
  }
  else if(guessed_no < randomNumber){
    printf("Too low! Try again.\n");
  }
  noofguess++;
  } while (guessed_no != randomNumber);

  printf("Congratulations! You Guessed the number %d in %d attempts.\n", randomNumber, noofguess);
  
    return 0;
}