#include <iostream>
using namespace std;


int main() {

    char choice;
    double volume;
    const double PI = 3.14159;
    double radius;
    double height;

    /* character input can only be one character - however in this case
       using the first character doesn't make sense, since its the same
       (c) for three of them.
    */
    cout << "Your choices for volume are the following:" << endl;
    cout << " (s) Sphere" << endl;
    cout << " (y) Cylinder" << endl;
    cout << " (c) Cone" << endl;
    cout << " (u) Cube" << endl;
    cout << "Please enter your choice:  ";
    cin  >> choice;

    // I've used if statements here, but switch would be great too
    if ( choice == 's' || choice == 'S') {
        cout << "Please enter the radius:  ";
        cin  >> radius;
        // IMPORTANT:  4/3 is 1 - because of integer division
        //             4.0/3, 4/3.0, or 4.0/3.0 will correctly give
        //             you 1.33333~
        volume = 4.0/3 * PI * radius * radius * radius;
    }
    else if ( choice == 'y' || choice == 'Y') {
        cout << "Please enter the height:  ";
        cin  >> height;
        cout << "Please enter the radius:  ";
        cin  >> radius;
        volume = PI * radius * radius * height;
    }
    else if ( choice == 'c' || choice == 'C') {
        cout << "Please enter the height:  ";
        cin  >> height;
        cout << "Please enter the radius:  ";
        cin  >> radius;
        // Remember integer division again!  1/3 is 0!
        volume = 1/3.0 * PI * radius * radius * height;
    }
    else if ( choice == 'u' || choice == 'U') {
        cout << "Please enter the height:  ";
        cin  >> height;
        volume = height * height * height;
    }
    else {
        cout << "Sorry, that is an invalid selection" << endl;
        return 0;
    }

    cout << "Volume is equal to : " << volume << endl;






}