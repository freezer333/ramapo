#include <iostream>
using namespace std;

int main() {
	char choice;
	const double PI = 3.14159;
	double area = 0;
	double radius;
	double width, height;
		
	cout << "Area calculator" << endl;
	cout << "(c) - Circle" << endl;
	cout << "(r) - Rectangle" << endl;
	cout << "(s) - Square" << endl;
	cout << "Which shape you want the area for?" << endl;

	cin >> choice;
	switch ( choice ) {
	case 'C':
	case 'c':
		cout << "Please enter radius:  ";
		cin  >> radius;
		area =  PI * radius * radius;
		break;
	case 'R':
	case 'r':
		cout << "Please enter width:  ";
		cin  >> width;
		cout << "Please enter height:   ";
		cin  >> height;
		area = height * width;
		break;
	case 'S' :
	case 's' :
		cout << "Please enter the width:  ";
		cin  >> width;
		area = width * width;
		break;
	default :
		cout << "Invalid choice" << endl;
		return 0;
	}
	cout << "Area is:  " << area << endl;
}