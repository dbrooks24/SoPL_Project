/*
	David A. Brooks
	Structure of Programming Languages - project
*/
#include <iostream>
#include "Utilities.hpp"

int main()
{
	std::string command = "r"; // r = run
	while (command == "r")
	{
		std::cout << "\n Welcome to David Brooks's Project! (Object Oriented C++)" << std::endl;

		std::cout << "\tstarting..." << std::endl;
		Palindrome* palindromeObj = new Palindrome;

		std::cout << std::endl << std::endl;
		std::cout << "------Words that are palindromes-------" << std::endl;
		std::cout << palindromeObj;
		std::cout << "\n---------------------------------------" << std::endl;


		delete palindromeObj;

		std::cout << "~~> What would you like to do? [ e:=\"exit\" and r:=\"re-run\"]->";
		std::cin >> command;

		if (command == "e")
		{
			std::cout << "\tterminating gracefully... thank you and stay safe!\n" << std::endl;
			return 0;
		}

		// if we are here, then the user typed in a char other then "e" or "r"
		while (command != "r")
		{
			command = WrongCommandInput(command);
		}

	}

	return 1;
};