//https://repl.it/join/ldwfkake-orangenotebook
//I used a somewhat agile approach to this task, starting with a basic F and C converter MVP
//I then added K conversion to the MVP
//Next i noticed my code was getting messy, so i refractored it by splitting conversion up into functions
//Finally i worked on handling invalid inputs

#include <iostream>
using namespace std;

//F to C converter
void farenhieightToCentigrade(float fahrenheit){
  float centigrade = ((fahrenheit -32) * 5 / 9);
  cout << fahrenheit << " degrees Fahrenheit is " << centigrade << " degrees Centigrade\n";
}

//F to K converter
void farenhieightToKelvin(float fahrenheit){
  float kelvin = ((fahrenheit + 459.67) * 5 / 9);
  cout << fahrenheit << " degrees Fahrenheit is " << kelvin << " degrees Kelvin\n";  
}

//C to F converter
void centigradeToFahrenheit(float centigrade){
  float fahrenheit = ((centigrade * 9 / 5) + 32);
  cout << centigrade << " degrees Centigrade is " << fahrenheit << " degrees Fahrenheit\n";
}

//C to K converter
void centigradeToKelvin(float centigrade){
  float kelvin = (centigrade + 273.15);
  cout << centigrade << " degrees Centigrade is " << kelvin << " degrees Kelvin\n";
}

//K to F converter
void kelvinToFarenhieght(float kelvin){
  float fahrenheit = ((kelvin - 273.15)* 1.8000 + 32.00);
  cout << kelvin << " degrees Kelvin is " << fahrenheit << " degrees Fahrenheit\n";
}

//K to C converter
void kelvinToCentigrade(float kelvin){
  float centigrade = (kelvin - 273.15);
  cout << kelvin << " degrees Kelvin is " << centigrade << " degrees Centigrade\n";
}

//Main program
int main() {
  //Initialising variables
	char conversion;
  float temp;

    //Prompts user to enter a starting temp
    cout << "Please enter the starting temperature: ";

    //Checks if temperature input is a float
    if(cin >> temp){
      cout << "Press 'C' to convert from Centigrade to Fahrenheit and Kelvin.\nPress ‘F’ to convert from Fahrenheit to Centigrade and Kelvin.\nPress 'K' to convert from Kelvin to Centigrade and Fahrenheight\n\nYour choice: ";
      cin >> conversion;
      //Checks which conversion the user wants and calls appropriate functions
      switch(conversion){
        case 'C': case 'c':
          centigradeToFahrenheit(temp);
          centigradeToKelvin(temp) ;	
          break;
        case 'F': case 'f':
          farenhieightToCentigrade(temp);
          farenhieightToKelvin(temp);
          break;
        case 'K': case 'k':
          kelvinToCentigrade(temp);
          kelvinToFarenhieght(temp);
          break;
        default:
          cout << "Invalid input";
      }
    }
    //If temperature input is not a float returns an invalid number error and exits program
    else{
      cout << "Invalid number";    
    }

	return 0;
}
