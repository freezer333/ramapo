#include <iostream>
using namespace std;


int main() {
	int count = 0;
	int input;

	while ( count < 5 ) {
		cout << "Enter a number divisible by 3 and 5:  ";
		cin >> input;

		if ( input % 3 == 0 && input % 5 == 0 ) {
			count++;
		}
	}

	cout << "Nice!" << endl;




}