// Employee Pay
// this program asks the user for how many hours they work and returns how much money they made in that pay period
// it also will print out the amount of tax collected from the paycheck and the money they are actually receiving after taxes
#include <iostream>

using namespace std;

int main() {
  double payRate;
  double overtimePay;
  int overtime;
  double overtimeAmount;
  double numHours;
  double socSecTax;
  double fedTax;
  double stateTax;
  int medInsurance;
  double grossPay;
  double takeHomePay;
// initializing these variables with their set amounts
  payRate = 16.00;
  overtimePay = payRate * 1.5;
  medInsurance = 10;
  overtime = 0;
  overtimeAmount = 0;
// asks the user for how many hours they worked this week
  cout << "How many hours did you work this week? " << endl;
  // stores the input into the varaible numHours
  cin >> numHours;
// checks for overtime hours
if (numHours > 40) {
  // calculates the number of overtime hours by subtracting 40 since 40 is maximum for part-time jobs
  overtime = numHours - 40;
  // calculates the amount of overtime pay
  overtimePay = overtime * overtimePay;
}
  // calculates the total gross pay before taxes
  grossPay = (payRate * numHours) + overtimePay;
// calculates each tax accordingly
  socSecTax = grossPay * 0.06;
  fedTax = grossPay * 0.14;
  stateTax = grossPay * 0.05;
  grossPay = grossPay - medInsurance;
// determines actual take home pay
  takeHomePay = grossPay - socSecTax - fedTax - stateTax;
// prints out total gross pay, each taxed amount, and the net take-home pay
  cout << " " << endl;
  cout << "Total Gross Pay: $" << grossPay << endl;
  cout << " " << endl;
  cout << "Witholding Amounts: " << endl;
  cout << "Social Security: $" << socSecTax << endl;
  cout << "Federal Income Tax: $" << fedTax << endl;
  cout << "State Income Tax: $" << stateTax << endl;
  cout << "Medical Insurance: $" << medInsurance << endl;
  cout << " " << endl;
  cout << "Net take-home pay: $" << takeHomePay << endl;
  cout << " " << endl;
  return 0;
}
