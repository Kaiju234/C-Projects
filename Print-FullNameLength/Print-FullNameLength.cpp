#include<iostream>
#include<string>

int main()
{
	//Declare Variables and Complete 
	std::string firstName = "Raj";
	std::string lastName = "Shah";
	std::string fullName = firstName;

	// prints the results
	std::cout << "Hello"
	<< fullName << "\n";
	std::cout << "Your Full Name is "
		<< fullName.length()
		<< " characters long. ";

	return 0;

}