# AP-Module-Cpp-Monday-Exercises
This repo is part of my 'Advanced Programming' module. It contains all of my Monday tasks / challenges.
## Exercise 1: Quote a quote
Quotation marks are often used to denote the start and end of a string. However, sometimes we need to print out the quotation marks (both single and/or double quotes) themselves using escape characters (a.k.a.escape sequences).

This C++ program prompts the user for a quote and the nfor an author, it then proceeds to display the quotation and the author in this format:
```
What is the quote? The way to get started is to quit talking and begin doing.
Who said it? Walt Disney
Walt Disney says: “The way to get started is to quit talking and begin doing.”
```

## Exercise 2: Temperature Conversion
This C++ program converts temperatures from Farenheit, Centigrade and Kelvin. It prompts the user for a temperature and if it's in Farenheit, Centigrade or Kelvin and outputs conversions in the two remaining temperatures.

## Exercise 3: Area of a Rectangle Room
A C++ program that prompts the user for the length and width of a room, either in feet or meters, then display the area in both feet and meters squared;

## Number Guesser:
A C++ ‘guess the number’ game that supports three levels of difficulty; level 1 is limited to numbers 1..10, level 2 is limited to numbers 1..100 and level 3 is limited to numbers 1..1000. It prompts the user to select a difficulty level before the game begins. The program picks a random number and prompts the player to ‘guess’; each time the player ‘guesses’ the program provides a hint (e.g., too low, too high).

The program logs the number of guesses and once correct tells the player how many attempts were made before asking them to ‘play again’. Example output:
```
Let’s play ‘Guess the Number’
Please pick a difficulty level (1, 2 or 3)? 1
Great, I have randomly picked a number in the range 1 - 10
What’s your guess? 5
Too low, guess again: 8
Too high, guess again: 7
Well done, most impressive! the number was 7 – you got it in 3 guesses
Do you want to play again (Y/N)? N
No problem, see you later.
```

## Self-Service Checkout
A program where once the user has finished entering items they get shown the total cost of all the items and a new shopping tax (the tax has been introduced to help the country’s financial recovery from Covid); an example output is shown below. 

Shopping Tax: 5.5%

Example output:
```
Please enter a quantity for item 1 (or 0 to finish): 3
Please enter item 1 cost: 0.99

Please enter a quantity for item 2 (or 0 to finish): 2
Please enter item 2 cost: 1.50

Please enter a quantity for item 3 (or 0 to finish): 1
Please enter item 2 cost: 2.99

Please enter a quantity for item 3 (or 0 to finish): 0
Thank you.

Subtotal: £8.96
Shopping Tax: £0.49

Total: £9.45
```
