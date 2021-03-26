/*
	David A. Brooks
	Structure of Programming Languages - project
*/
#include <iostream>
#include "Utilities.hpp"

int main()
{
	char command = 'r'; // r = run
	while (command == 'r')
	{
		std::cout << "\n Welcome to David Brooks's Project! (Object Oriented C++)" << std::endl;

		std::cout << "\tstarting..." << std::endl;
		Palindrome* palindromeObj = new Palindrome;

		std::cout << std::endl << std::endl;
		std::cout << "------Words that are palindromes-------" << std::endl;
		std::cout << palindromeObj;


		delete palindromeObj;

		std::cout << "~~> What would you like to do? [ e:=\"exit\" and r:=\"re-run\"]->";
		std::cin >> command;
		if (command == 'e')
		{
			std::cout << "\tterminating gracefully... thank you and stay safe!\n" << std::endl;
			return 0;
		}

		while (command != 'r' && command != 'e')
		{
			std::cout << "~~> ERROR, invalid command. [ e:=\"exit\" and r:=\"re-run\"]";
			std::cout << "repsonse... ->";
			std::cin >> command;
		}

	}

	return 1;
};