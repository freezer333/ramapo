#include <iostream>
using namespace std;


int main() {
	int N;
	int sum = 0;

	cout << "Enter N:  " ;
	cin  >> N;

	for ( int i = 0; i < N; i++ ) {
		sum += (i+1);
	}

	cout << "Summation => " << sum << endl;


}