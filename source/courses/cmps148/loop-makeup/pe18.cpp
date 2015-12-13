#include <iostream>
using namespace std;

int main() {
	int input;
	double sum = 0;
	int count = 0;

	do {
		cout << "enter number:  ";
		cin  >> input;
		if ( input != -1 ) {
			sum+= input;
			count++;
		}
	}while ( input != -1 );

	cout << sum << endl;
	cout << count << endl;
	cout << "Average:  " << sum / count << endl;


}