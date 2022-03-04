// Hangman.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Hidden word
    string secret = "programming";
    //Word to show on screen
    string dashes = "-----------";
    //Remaining guesses (if this gets to 0, lose)
    int guessesLeft = 6;

    while (true) {
        //Ask user to guess
        char guess;


        //Check the guess and fill in the dashed


        //If the guess is not found, subtract from guessesLeft


        //If guessesLeft reaches 0, cout "You Lose" and break the loop

    }

    system("pause");
}