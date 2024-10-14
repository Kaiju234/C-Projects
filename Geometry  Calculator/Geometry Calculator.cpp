#include <iostream>
#include <cmath>  // Properly include cmath here for pow()

using namespace std;

int main()
{
    // Variables
    int userChoice;

    // Menu
    cout  << "Geometry Calculator" << endl << endl;
    cout  << "\t 1. Calculate the Area of a Circle" << endl;
    cout  << "\t 2. Calculate the Area of a Rectangle" << endl;
    cout  << "\t 3. Calculate the Area of a Triangle" << endl;
    cout  << "\t 4. Quit" << endl;
    cout  << "Enter your choice (1-4):" << endl;
    cin  >> userChoice;

    switch (userChoice)
    {
        case 1:
        {
            double radius; 
            double area;
            cout << "What is the Radius of the Circle? ";
            cin >> radius;
            area = 3.14159 * pow(radius, 2);
            cout << "The area is " << area << endl;
            break;
        }

        case 2:
        {
             
            double rWidth;
            double rLength; 
            double rArea;
            cout << "What is the Rectangle's Width? ";
            cin >> rWidth;
            cout << "What is the Rectangle's Length? ";
            cin >> rLength;
            rArea = rLength * rWidth;
            cout << "The area of your rectangle is " << rArea << endl;
            break;
        }

        case 3:
        {
        
            double tBase;
            double tHeight; 
            double tArea;
            cout << "What is the base of your triangle? ";
            cin >> tBase;
            cout << "What is the height of your triangle? ";
            cin >> tHeight;
            tArea = 0.5 * tBase * tHeight;
            cout << "The area of your triangle is " << tArea << endl;
            break;
        }

        case 4:
            cout << "Bye" << endl;
            break;

        default:
            cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
    }

    return 0;
}

