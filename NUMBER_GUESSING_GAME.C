#include <stdio.h>
#include <stdlib.h>

int main() {
  // Generate a random number between 1 and 10.
  int random_number = rand() % 10 + 1;

  // Initialize the number of guesses.
  int guesses = 0;

  // Loop until the user guesses the correct number.
  while (1) {
    // Get the user's guess.
    int guess;
    printf("Guess a number between 1 and 10: ");
    scanf("%d", &guess);

    // Check if the guess is correct.
    if (guess == random_number) {
      printf("Congratulations! You guessed the correct number in %d guesses.\n", guesses);
      break;
    } else if (guess < random_number) {
      printf("Your guess is too low.\n");
    } else {
      printf("Your guess is too high.\n");
    }

    // Increment the number of guesses.
    guesses++;
  }

  return 0;
}
