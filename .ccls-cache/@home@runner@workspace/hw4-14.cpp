// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  double small = 0.0;
  double medium = 0.0;
  double large = 0.0;
  double family = 0.0;
  double totalSold = 0.0;

  cout << "Small pizzas sold: ";
  cin >> small;
  cout << "Medium pizzas sold: ";
  cin >> medium;
  cout << "Large pizzas sold: ";
  cin >> large;
  cout << "Family pizzas sold: ";
  cin >> family;
  totalSold = small + medium + large + family;
  cout << endl;
  cout << "Total pizzas sold: " << totalSold << endl;
  cout << "Small pizzas sold: " << small/ totalSold * 100 << "%" <<  endl;
  cout << "Medium pizzas sold: " << medium/ totalSold * 100 << "%" << endl;
  cout << "Large pizzas sold: " << large/totalSold * 100 << "%" << endl;
  cout << "Family pizzas sold: " << family/ totalSold * 100 << "%" << endl;

  return 0;
} // end of main function