//https://repl.it/join/ujdvywvh-orangenotebook
//First i created different functions for conversions and calculations
//I then tested these functions to make sure they work, following this i worked on gathering user input
//I then worked on handling invalid inputs, and finally the output strings

#include <iostream>
using namespace std;

//ft to m converter
float footToMeters(float foot){
  return (foot * 0.3048);
}

//m to ft converter
float metersToFoot(float meters){
  return (meters / 0.3048);
}

//area calculator
float area(float x, float y){
  return (x * y);
}


//Main program
int main() {
  //Initialising variables
  float dimensionX, dimensionY;
  char measurement;

  //Asking user for their measurement of chice
  cout << "Enter 'F' to use foot\nEnter 'M' to use meters\n\nChoice: ";
  cin >> measurement;

  //Getting length of room
  cout << "Room length:  ";
  //Checking if input is valid
  if(cin >> dimensionX){
    //Getting width of room
    cout << "Room width:  ";
    //Checking if input is valid
    if(cin >> dimensionY){

      //Switch case to determine if using feet or meters
      switch(measurement){
        case 'F': case 'f': 
          cout << "Your room's dimension is " << dimensionX << " by " << dimensionY << " foot, the area is:\n" << area(dimensionX, dimensionY) << " square foot\n" << area(footToMeters(dimensionX), footToMeters(dimensionY)) << " square meters";
          break;
        case 'M': case 'm': 
          cout << "Your room's dimension is " << dimensionX << " by " << dimensionY << " meters, the area is:\n" << area(dimensionX, dimensionY) << " square meters\n" << area(metersToFoot(dimensionX), metersToFoot(dimensionY)) << " square foot";
          break;
        default: 
          cout << "Invalid measurement input: " << measurement;
      }
    }else{
      cout << "Invalid width input";
    }
  }else{
  cout << "Invalid length input";
  }
  return 0;
}
