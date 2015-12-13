#include <iostream>
using namespace std;

int main() {
	double sign = 1;
	int den = 1;
	int n;
	double pi = 0;
	cout << "Enter number of terms:  ";
	cin  >> n;

	for ( int i = 0; i < n; i++ ) {
		double term = sign / den;
		pi += term;
		sign *= -1;
		den+= 2;
	}
	cout << "PI = " << pi  * 4 << endl;


}