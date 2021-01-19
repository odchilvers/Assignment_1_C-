// Employee Pay

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

  payRate = 16.00;
  overtimePay = payRate * 1.5;
  medInsurance = 10;
  overtime = 0;
  overtimeAmount = 0;

  cout << "How many hours did you work this week? " << endl;
  cin >> numHours;
// checks for overtime hours
if (numHours > 40) {
  overtime = numHours - 40;
  overtimePay = overtime * overtimePay;
}
  grossPay = (payRate * numHours) + overtimePay;
// calculates each tax accordingly
  socSecTax = grossPay * 0.06;
  fedTax = grossPay * 0.14;
  stateTax = grossPay * 0.05;
  grossPay = grossPay - medInsurance;
// determines actual take home pay
  takeHomePay = grossPay - socSecTax - fedTax - stateTax;

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
