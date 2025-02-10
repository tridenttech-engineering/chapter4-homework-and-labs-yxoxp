// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  double totalDeposits = 0.0;
  double totalWithdrawals = 0.0;
  double startBalance = 0.0;
  double endingBalance = 0.0;

  cout << "Enter starting balance: ";
  cin >> startBalance;
  cout << "Enter total deposits: ";
  cin >> totalDeposits;
  cout << "Enter total withdrawals: ";
  cin >> totalWithdrawals;
  endingBalance = startBalance + totalDeposits - totalWithdrawals;
  cout << "Ending balance: $" << endingBalance << endl;

  return 0;
} // end of main function