//Cereal
#include <iostream>

using namespace std;

int main() {
  double metricTon = 35273.92;
  double ouncesCereal;
  double metricWeight;
  double numOfBoxes;

  cout << "Enter the weight of the cereal package in ounces: " << endl;
  cin >> ouncesCereal;
  // calculates the metric weight in tons
  metricWeight = ouncesCereal/metricTon;
  // calculates the number of boxes to equal 1 ton
  numofBoxes = metricTon/ouncesCereal;
  cout << "The weight of the cereal package in tons: " << metricWeight << endl;
  cout << "The number of boxes to yield one metric ton of cereal: " << numofBoxes << endl;
  return 0;
}
