/******************************************************************
Description: This code will calculate the power in watts that is generated a specific water flow.
******************************************************************/

/******************************** Function Prototype ******************************************/
//double powerGen(double, double)

/****************************************** Main Code ****************************************/

#include <iostream>

using namespace std;

int main() 
{
  // variables
  double P; // Power in watts
  double Q; // volume of water flow m^3/s
  double H; // Head of water in m
  const double p = 1; // water density in kg/m^3
  const double g = 9.8; // force of gravity in m/s^2

  // get user input for head distance and water flow

  cout << "Input the volume of water flow [in m^3/s]: " << endl;
  cin >> Q;
  cout << "Input the head distance [in m]: " << endl;
  cin >> H;

  // calculate 

  P = ( p * Q * H * g );
  cout << "P = " << P; 
}