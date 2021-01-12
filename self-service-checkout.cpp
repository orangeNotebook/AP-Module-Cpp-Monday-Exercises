//https://repl.it/join/jsffnfqr-orangenotebook
//First i deconstructed the problem by taking input from the user within a loop and adding it to a total
//Following this i added a second input that allows the user to change the quantity of the items
//After this my code was getting messy so i refactored by creating addItems() and renaming some variables
//I then worked on output formatting and input validation (not letting users enter wrong inputs)
//Finally i implemented the tax and rounding the output to 2dp

//importing
#include <iostream>
#include <iomanip>
#include<cstdlib>
#include <string>
using namespace std;

//tax constant
const float tax = 0.055;

//fn for adding items to a total, returns subtotal of all items
float addItems(){
  //initialising variables
  string itemStr, costStr;
  int itemInt, count = 0;
  float costFloat, totalCost;
  bool restart = false;
  
  //adding items loop
  while(true){
  count++;
  cout << "Please enter a quantity for item " << count << " (or 0 to finish): ";
  cin >> itemStr;

  //if statement checks if the input is an invalid number
  if( itemStr.find_first_not_of("1234567890") != string::npos )
    {
      //if invalid makes restart true (re-calling function) and gives an error message
      cout << "Invalid number, restarting\n\n";
      restart = true;
      break;
    }
  //if valid continues and changes input from str to int
  itemInt = atof( itemStr.c_str() );

  //checks if the input quantity is equal to 0 (to finish), if so break out of loop
  if( itemInt <= 0 ){
    break;
  }

  cout << "Please enter item " << count << " cost: ";
  cin >> costStr;

  //if statement checks if the input is an invalid number
  if( costStr.find_first_not_of("1234567890.-") != string::npos )
    {
      //if invalid makes restart true (re-calling function) and gives an error message
      cout << "Invalid price, restarting\n\n";
      restart = true;
      break;
    }
  //if valid continues and changes input from str to float
  costFloat = atof( costStr.c_str() );
  
  //calculates cost * quantity and adds to total
  costFloat *= itemInt;
  totalCost += costFloat;
  cout << "\n";

  }
  //Out of loop, checks if restart == true (this only happens if invalid input was given)
  if(restart){
    //if invalid input restarts by re-calling function (Recursive)
    return addItems();
  }
  //If restart != true then outputs message with subtotal and returns subtotal
  else{
  cout << "Thank you\n\nSubtotal: £" << fixed << setprecision(2) << totalCost << "\n";
  return totalCost;
  }
}

//main function
int main() {
  //initialising variables
  float shoppingTax, total;

  //sets total to return from addItems() (subtotal)
  total = addItems();
  //calculates the shopping tax for this purchase
  shoppingTax = total * tax;
  //adds shopping tax to toal
  total += shoppingTax;

  //outputs shopping tax and total, rounded to 2dp
  cout << "Shopping Tax: £" << fixed << setprecision(2) << shoppingTax << "\n\nTotal: £" << total;
}
