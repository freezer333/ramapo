#include <iostream>
using namespace std;



int main() {

    int n;

    do {
        cout << "Please enter N (1-50):  ";
        cin  >> n;
    } while ( n < 1 || n > 50);

    int num_found = 0;
    int num_to_test = 2;
   
    while ( num_found < n) {
        bool prime = true; // lets assume its prime...

        // Check every number between 2 and this number
        // the && prime part just stops the loop if we
        // find a number that divides evenly (it only takes one!)
        for ( int i = 2; i < num_to_test && prime; i++ ) {
            if ( num_to_test % i == 0) {
                // this number can't be prime...
                prime = false;
            }
        }
        if ( prime ) {
            num_found++;
            cout << num_to_test << endl;
        }

        num_to_test++;
    }


}