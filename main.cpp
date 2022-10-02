/******************************************************************
Description: This code will calculate the power in watts that is generated a
specific water flow.
******************************************************************/
#include <iostream>
using namespace std;

////////////////////////  Function Prototypes ////////////////////////
double powerGen(double flow, double head);

////////////////////////////// Main Code /////////////////////////////
int main() {
  // variables
  double Q;             // volume of water flow m^3/s
  double H;              // Head of water in m
  //double P;             // Power in watts
  const double p = 1;   // water density in kg/m^3
  const double g = 9.8; // force of gravity in m/s^2


  // get user input for head distance and water flow

  cout << "Input the volume of water flow [in m^3/s]: " << endl;
  cin >> Q;
  cout << "Input the head distance [in m]: " << endl;
  cin >> H;

  // call function
  double power = powerGen(Q, H);
  cout << "The power generated is " << power << " watts.";

  // part b.) The test case of inputs Q = 20 and H = 30 = 5880 watts of power.
  
}
/////////////////////////  User Defined Functions //////////////////////
double powerGen(double flow, double head){
  
  const double p = 1;   // water density in kg/m^3
  const double g = 9.8; // force of gravity in m/s^2

  double P = (p * flow * head * g);
  
  return P;
};