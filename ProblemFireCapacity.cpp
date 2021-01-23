// Fire Capacity

#include <iostream>

using namespace std;

int main() {
  int maxRoomCapacity;
  int numOfPeople;
  int numUntilMax;

  cout << "Enter the maximum room capacity: " << endl;
  cin >> maxRoomCapacity;
  cout << "Enter the number of people attending: " << endl;
  cin >> numOfPeople;
// checks if number of people fits room capacity
if (numOfPeople <= maxRoomCapacity) {
  // calcutes number of people that can attend until max occupancy
  numUntilMax = maxRoomCapacity - numOfPeople;
  cout << "Legal: Meeting may proceed." << endl;
  cout << numUntilMax << " more people may attend." << endl;
}
// runs if too many people want to enter the room
else {
  // calculates how many people must be excluded to return to max capacity
  numUntilMax = numOfPeople - maxRoomCapacity;
  cout << "Illegal: Fire Hazard! Too many people in room." << endl;
  cout << numUntilMax << " people must be excluded in order to meet the fire regulations." << endl;
}
  return 0;
}
