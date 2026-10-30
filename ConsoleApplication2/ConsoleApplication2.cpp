# Programming
/******************************
* Автор: Прохоров В.В.        *
* Задание: Линейные алгоритмы *
* Вариант: 9                  *
******************************/

#include <iostream>

using namespace std;

int main() {
	constexpr double pi = 3.14;
	double rad0, rad1, rad2, alfa, Q1, Q2, Q3, vis;
	int len, P;
	vis = 2.4 * pow(10, -4);
	P = 7210;

	cout << "Presure = " << P << " Pa" << endl;
	cout << "Fluid viscosity = " << vis << " Pa*s" << endl;

	cout << "Enter how long the tube is in meters = ";
	cin >> len;
	cout << "Enter the side of triangular cross-section tube in meters = ";
	cin >> alfa;
	cout << "Enter tube radius in meters = ";
	cin >> rad0;
	cout << "Enter tube inner radius in meters = ";
	cin >> rad1;
	cout << "Enter tube outer radius in meters = ";
	cin >> rad2;

	Q1 = (pi * pow(rad0, 4.0)) / 8.0 * (P / (len * vis));
	Q2 = ((pi * pow(rad0, 4.0)) / 8.0 * (P / (len * vis))) * (( pow( rad1, 2.0) - pow( rad2, 2.0)) / log( rad1 / rad2 ) + pow( rad1, 4.0) - pow( rad2, 4.0));
	Q3 = ((pow( alfa, 4.0) * sqrt(3.0) ) / 320.0) * ( P / ( len * vis ));

	cout << "The fluid flow rate for the pipe with a circular cross-section = "   << Q1 << endl 
     << "The fluid flow rate for the pipe with a inner and outer radius = "   << Q2 << endl 
     << "The fluid flow rate for the pipe with a triangular cross-section = " << Q3 << endl;
}
