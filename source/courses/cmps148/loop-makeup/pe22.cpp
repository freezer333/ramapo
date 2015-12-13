#include <iostream>
using namespace std;

int main() {
	int x;

	do {
		cout << "Enter X (between 2 and 10):  ";
		cin  >> x;
	} while ( !(x < 10 && x > 1) );
	//while ( x < 2 || x > 10);

	// print x rows
	for ( int i = 0; i < x; i++ ) {
		// print out single row
		for ( int j = 0; j < x; j++ ) {
			cout << "*";
		}
		cout << endl;
	}


}