#include <iostream>
#include <cmath>
using namespace std;

int quad(double a, double b, double c, double &r1, double &r2)
{
    double discriminant = b * b - 4 * a * c;
    if (discriminant < 0)
    {
        // there are no roots, like
        // the example of a = 3, b = 1, and c = 9
        return 0;
    }
    else if (discriminant == 0)
    {
        // there is one root, like the example
        // a = 1, b = 2, and c = 1

        r1 = (-b + sqrt(discriminant)) / (2 * a);

        return 1;
    }
    else
    {
        // There are two roots

        r1 = (-b + sqrt(discriminant)) / (2 * a);
        r2 = (-b - sqrt(discriminant)) / (2 * a);

        return 2;
    }
}

int main()
{
    double a, b, c;
    double root1, root2; // variables to hold the roots
    int roots;

    cout << "Please enter coefficient A:  ";
    cin >> a;

    cout << "Please enter coefficient B:  ";
    cin >> b;

    cout << "Please enter coefficient C:  ";
    cin >> c;

    roots = quad(a, b, c, root1, root2);

    switch (roots)
    {
    case 0:
        cout << "Sorry, no roots could be solved." << endl;
        break;
    case 1:
        cout << "There is one root, " << root1 << endl;
        break;
    case 2:
        cout << "There are two roots - " << root1 << " and " << root2 << endl;
        break;
    }
}