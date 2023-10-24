#include <iostream>
using namespace std;

int main()
{
	double lenth = 0.0;
	

	cout << "Enter the lenth of the circle: ";
	cin >> lenth;
	double R2 = lenth / (2 * 3.14);
	cout << "The radius of the circle is: " << R2 << endl;
	double S = 3.14 * R2;
	cout << "The area of the circle is: " << S << endl;
	
	return 0;
}