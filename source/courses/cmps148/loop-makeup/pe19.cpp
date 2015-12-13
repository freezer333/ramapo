#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int input;

	do {
		
		do {
			cout << "enter positive number:  ";
			cin  >> input;
		} while ( input < -1 );

		if ( input != -1 ) {
			cout << input << " => " << sqrt(input) << endl;
		}

	} while ( input != -1 );


}