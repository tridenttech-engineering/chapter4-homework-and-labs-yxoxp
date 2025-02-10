//Lab4-2.cpp - displays a salesperson's commission
//Philip Regalbuto
#include <iostream>
using namespace std;
int main()
{
 const double COMM_RATE = 0.1;
  double sales = 0.0;
  double commission = 0.0;

  cout << "sales amount: ";
  cin>> sales;
  
  commission = sales * COMM_RATE;
  cout << "Commission; $"<< commission << end1;

  return 0;
} //end of main function
/*
Sales amount: 1328.50
Commission: $132.85
Press any key to continue . . .
*/
