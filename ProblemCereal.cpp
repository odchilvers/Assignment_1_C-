//Cereal
// this program will ask for the weight of a cereal package in ounces and return the ounces in tons
// also, it will return how many number of boxes are needed to equal one ton
#include <iostream>

using namespace std;

int main() {
  double metricTon = 35273.92;
  double ouncesCereal;
  double metricWeight;
  double numOfBoxes;
  // asks the user to input a number that is the cereal package in ounces
  cout << "Enter the weight of the cereal package in ounces: " << endl;
  // stores the inputted value into the ouncesCereal variable
  cin >> ouncesCereal;
  // calculates the metric weight in tons
  metricWeight = ouncesCereal/metricTon;
  // calculates the number of boxes to equal 1 ton
  numofBoxes = metricTon/ouncesCereal;
  // prints out the weight of the cereal package in tons
  cout << "The weight of the cereal package in tons: " << metricWeight << endl;
  // prints out the number of boxes to yield one metric ton of cereal
  cout << "The number of boxes to yield one metric ton of cereal: " << numofBoxes << endl;
  return 0;
}
