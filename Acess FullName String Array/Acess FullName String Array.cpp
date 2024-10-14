#include<iostream>
//call the library for string handiling //
# include<string>
int main()
{
	// Declare variable and complete the program 
	std::string firstName = "Raj";
	std::string lastName = "Shah";
	std::string fullName = firstName + lastName;

	//prints the results 
	std::cout << "Hello "
		<< fullName << "/n";
	std::cout << "The third charcter of "
		<< fullName[2]
		<< "\n";
	return 0;
}