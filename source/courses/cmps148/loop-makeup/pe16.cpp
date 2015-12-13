#include <iostream>
using namespace std;

int main() {
	int input;
	int x;

	do {
		cout << "Please enter a number between 1 and 100:  ";
		cin  >> input;
	} while ( input < 1 || input > 100 );

	do {
		cout << "Please enter a number between 1 and 100:  ";
		cin  >> x;
	} while ( x < 1 || x > 100 );



	int x = 0;
	while (x <= input) {
		cout << x << endl;
		x++;
	}
}