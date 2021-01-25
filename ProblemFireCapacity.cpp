// Fire Capacity
// this program determines whether the number of people attending a meeting meets room capcity or exceeds it due to a fire hazard
// it calculates how many more people may attend or how many will need to leave

#include <iostream>

using namespace std;

int main() {
  int maxRoomCapacity;
  int numOfPeople;
  int numUntilMax;
// asks the user for the maximum room capacity
  cout << "Enter the maximum room capacity: " << endl;
  // stores that vallue into maxRoomCapacity
  cin >> maxRoomCapacity;
  // asks the number of people attending
  cout << "Enter the number of people attending: " << endl;
  // stores that value into numOfPeople
  cin >> numOfPeople;
// checks if number of people fits room capacity
if (numOfPeople <= maxRoomCapacity) {
  // calcutes number of people that can attend until max occupancy
  numUntilMax = maxRoomCapacity - numOfPeople;
  cout << "Legal: Meeting may proceed." << endl;
  // prints out how many more people may attend
  cout << numUntilMax << " more people may attend." << endl;
}
// runs if too many people want to enter the room
else {
  // calculates how many people must be excluded to return to max capacity
  numUntilMax = numOfPeople - maxRoomCapacity;
  cout << "Illegal: Fire Hazard! Too many people in room." << endl;
  // prints how many people will need to leave
  cout << numUntilMax << " people must be excluded in order to meet the fire regulations." << endl;
}
  return 0;
}
