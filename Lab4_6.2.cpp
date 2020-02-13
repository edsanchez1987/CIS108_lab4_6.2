// Lab4_6.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;
using std::setw;

float cost_joists,
cost_2X6,
cost_2X4,
cost_4X4,
cost_4X8;
float price_joists,
price_2X6,
price_2X4,
price_4X4,
price_4X8,
totalcost;

int main()
{
   cout << "What is the cost per unit of Joists: ";
   cin >> cost_joists;
   price_joists = cost_joists * 25;

   cout << "\nWhat is the cost per unit of 2X6: ";
   cin >> cost_2X6;
   price_2X6 = cost_2X6 * 100;

   cout << "\nWhat is the cost per unit of 2X4: ";
   cin >> cost_2X4;
   price_2X4 = cost_2X4 * 25;

   cout << "\nWhat is the cost per unit of 4X4: ";
   cin >> cost_4X4;
   price_4X4 = cost_4X4 * 20;

   cout << "\nWhat is the cost per unit of 4 X 8 Sheet Plywood: ";
   cin >> cost_4X8;
   price_4X8 = cost_4X8 * 100;

   totalcost = price_2X4 + price_2X6 + price_4X4 + price_4X8 + price_joists;

   cout << fixed << setprecision(2);
   cout << "\n\nDescription " << setw(30) << "Cost per Unit " << setw(20) << "Quantity Needed" << endl;
   cout << "Joists" << setw(30) << cost_joists << setw(20) << "25" << endl;
   cout << "2X6   " << setw(30) << cost_2X6 << setw(20) << "100" << endl;
   cout << "2X4   " << setw(30) << cost_2X4 << setw(20) << "25" << endl;
   cout << "4X4   " << setw(30) << cost_4X4 << setw(20) << "20" <<  endl;
   cout << "4 X 8 Sheet Plywood" << setw(17) << cost_4X8 << setw(20) << "100" << endl;
   cout << "\n" << setw(30) << "Total Cost: " << setw(10) << "$" << totalcost << endl;
}

