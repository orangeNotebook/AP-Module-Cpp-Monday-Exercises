//https://repl.it/join/ezobciwu-orangenotebook
//First i deconstructed the problem and split different program functionality into functions
//I then worked on basic functionality (making the user be able to guess and the program telling if too high or low)
//Next i worked on formatting, refactoring and also on validating if the user is using correct inputs
//Finally i worked on creating the 'play again' loop and on custom comments depending on amount of guesses

#include <iostream>
#include<cstdlib>
#include <string>
using namespace std;

//fn that determines difficulity level, returns the max random number to be generated
int difficulityChoice(){
  char difficulity;
  cout << "Please pick a difficulty level (1, 2 or 3)? ";
  cin >> difficulity;
    switch(difficulity){
      case '1': 
        return 10;
      case '2': 
        return 100;
      case '3':
        return 1000;
      default:
        cout<< "\nInvalid difficulty input, restarting";
        return 0; //if an invalid character is entered the program returns 0
    }
    return 0;
}

//fn that generates the random number, it takes in the max number
int randomNumberGenerator(int max){
  //checks if the difficulity choice was valid, if not returns 0 straight away
  if(max == 0){
    return 0;
  }
  //generates random number and returns it
  int generatedNumber;
  srand(time(0));
  generatedNumber = (rand() % max + 1);
  cout << "\nGreat, I have randomly picked a number in the range 1 - " << max << '\n';
  return generatedNumber;
}

//fn used for each number guess
bool numberGuess(int secretNumber){
  //initialising variables
  int guessInt;
  string guessStr;

  //gets input
  cin >> guessStr;
  //if statement checks if the input is an  invalid number
  if( guessStr.find_first_not_of("1234567890.-") != string::npos )
    {
      //if invalid returns true (re-doing loop) and gives an error message
      cout << "Invalid number, guess again: ";
      return true;
    }

  //if input number is valid converts from str to int
  guessInt = atof( guessStr.c_str() );

  //checks if the number is the same as, lower then or higher then secret number 
  if(guessInt == secretNumber){
    return false; 
  }else if(guessInt < secretNumber){
    cout << "Too low, guess again: ";
    return true;
  }else{
    cout << "Too high, guess again: ";
    return true;
  }
}

//fn for custom comment depending on guesses (returns string)
string scoreComment(int guessCount){
  //switch case that determins how many guesses it took the user
  switch(guessCount){
    case 1:
      return ("\nWow, you are a mind reader!");
      break;
    case 2: case 3: case 4:
      return ("\nWell done, most impressive,");
      break;
    case 5: case 6:
     return ("\nGood, but i am sure you can do better!");
     break;
    default:
     return ("\nBetter luck next time!");
  }
  
}

//main program function
int main() {
  //initialising variables
  bool gameRunning = true; //bool to determine if the game is to be quit or not

  //game loop
  while(gameRunning){
    //initialising variables
    int guessCount = 0, secretNumber = 0;
    char playAgain;
    bool secretNumberNotFound = true;

    cout << "Let's play 'Guess the Number'\n";

    //lets the user choose a difficulity, return from that function becomes max of the number generator, return from generator goes becomes secret number
    secretNumber = randomNumberGenerator(difficulityChoice());
    //checks if the secret number is valid, if not resets app (is only invalid if incorrect value on difficulity selection)
    if(secretNumber != 0){

      cout << "What's your guess? ";
      //guess loop
      while(secretNumberNotFound){
        guessCount++; //increments guess counter each loop
        secretNumberNotFound = numberGuess(secretNumber); //return from numberGuess is bool, once guessed 'false' returns and loop ends
      }

      //Congratulatory message upon finding number, score comment is concatonated to start of message
      cout << scoreComment(guessCount) << " the number was " << secretNumber << " - you got it in " << guessCount << " guesses\nDo you want to play again (Y/N)? ";
      cin >> playAgain;

      //paly again switch case, if 'Y' gameRunning stays true and loop restarts, if 'N' gameRunning becomes false and game quits
      switch(playAgain){
        case 'Y': case 'y': 
          cout << '\n';
          gameRunning = true;
          break;
        case 'N': case 'n':
          cout << "No problem, see you later.\n";
          gameRunning = false;
          break;
        default: 
          cout << "Invalid selection, restarting\n"; //if invalid selection restarts game
      }
    }
    //else statement in case difficulity choice is invalid (2 new lines and restarts loop)
    else{
      cout << "\n\n";
    }
  }
  return 0;
}
