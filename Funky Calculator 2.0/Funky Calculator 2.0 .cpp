// Raj Shah
// Intro To C++
// September 25nd 2024

// Includes
#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// Function to Calculate the Area of The Hexagon
double hexagonArea(double s) 
{ 
    return ((3 * sqrt(3) *  
            (s * s)) / 2);      
} 

// main Function
int main() 
{ 
    // Variables 
    int userChoice;

    // Menu 
    cout << "Funky Calculator" << endl <<endl;
    cout << "\t 1. Calculate the Area of a Circle" << endl;
    cout << "\t 2. Calculate the Area of a Rectangle" <<  endl;
    cout << "\t 3. Calculate the Area of a Triangle" << endl;
    cout << "\t 4. Calculate the Factorial of N" << endl;
    cout << "\t 5. Calculate the Area of a Hexagon" << endl;
    cout << "\t 6. Exit The Application" << endl;
    cout << "\t Enter your choice (1-6):"<<endl;
    cin >> userChoice;

    switch (userChoice) { 
        case 1: 
        {
            double radius;
            double area;
            cout << "What is the Radius of the Circle? ";
            cin >> radius;
            area = M_PI * pow(radius, 2); // Use M_PI for Pi
            cout << "The Area is " << area << endl;
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
            cout << "What is the base of your Triangle? ";
            cin >> tBase;
            cout << "What is the height of your Triangle? ";
            cin >> tHeight;
            tArea = 0.5 * tBase * tHeight;
            cout << "The Area of Your Triangle is " << tArea << endl;
            break;
        }
         
         case 4: 
        {
            int n;
            cout << "Enter a number to calculate its factorial:";
            cin >> n;
            if (n < 0) {
                cout << "Factorial of a negative number is not defined." << endl;
            } else {
                cout << "The factorial of " << n << " is " << factorial(n) << endl;
            }
            break;
        }
        
         case 5: 
         { 
         
         double s = 4;  
         cout << "Area : "
              << hexagonArea(s); 
         return 0; 
          
         }
        




        case 6:
        {
            
            
            cout << "Quitting..." << endl;
            break;


        }


        default: 
        {
            cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
            break;
        }
    }

    return 0;
}