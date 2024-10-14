#include<iostream>
int main()
{
	std::cout << "Welcome enter to numbers : ";
	//Declares input variables 
	int x, y;
	//Declares output variables 
	int sum;

	//prompts user for inputs//
	std::cout << "Types a number: ";
	std::cin >> x;
	std::cout << x << "\n";
	std::cout << "type another number: ";
	std::cin >> y;
	std::cout << y << "\n";
	//Operates on the variables
	sum = x + y;

	//Print the results 
	std::cout << "Sum is: " << sum;
	return 0;




}