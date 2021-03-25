/*
	David A. Brooks
	Structure of Programming Languages - project
*/
#include <iostream>
#include "Utilities.hpp"

int main()
{
	std::cout << "Welcome to David Brooks's Project! (Object Oriented C++)" << std::endl;
	
	std::cout << "starting..." << std::endl;
	Palindrome* palindromeObj = new Palindrome;

	std::cout << std::endl << std::endl;
	std::cout << "------Words that are palindromes-------" << std::endl;
	std::cout << palindromeObj;


	delete palindromeObj;
};