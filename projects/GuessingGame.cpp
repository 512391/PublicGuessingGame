/*Author: Jay Williamson
  Date: 8/27/2024
  This is a game where you guess a number then the computer will say higher or lower
  this continues until you have guessed the number
  Rules:
  1. No global variable(Can use global constants)
  2. No strings
  3. Include Iostream not stdio
  4. Avoid using the mouse when possible. Learn shortcuts
  5. Only use break and continue if you have to like in switch statements
 */

#include <iostream>
#include <time.h>
#include <stdlib.h>

int main()
{
  //Creates variables for the randome number and the one we are guessing
  int randomNumber, guessedNumber;

  //Creates seed for random number
  srand(time(NULL));

  //Creates random number
  randomNumber = rand() % 101;

  //Makes guessed number -1 initially so it wont analysize it as a guess initially
  guessedNumber = -1;
  
  do
    {
      //Makes sure guess is not the initial one
      if(guessedNumber != -1)
	{
	  //checks whether the guess is too high or too low
          if(guessedNumber < randomNumber)
	   {
	     std::cout << "Too low \n";
	   }
          else
	   {
	     std::cout << "Too high \n";
	   }
	}

      //asks gor guess
      std::cout << "Guess a number 0-100 \n";

      //gets guess
      std::cin >> guessedNumber;
    }
  while(guessedNumber != randomNumber);

  //Congradualtes the user when they have guessed correctly
  std::cout << "Correct the number was: " << randomNumber;
  std::cout << "Do You want to play again(y/n) \n";

  char willPlayAgain;
  
  std::cin >> willPlayAgain;
  
  if(willPlayAgain == 'y')
    {
      main();
    }
  else
    {
      return 0;
    }
}
