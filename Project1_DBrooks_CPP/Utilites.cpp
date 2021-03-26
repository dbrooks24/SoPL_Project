#include <iostream>
#include <string>
#include <cmath>
#include <sstream>

#include "Utilities.hpp"

void Palindrome::Evaluate()
{
	for (std::string Item : *this->UserProvidedWords)
	{
		if (isPalindrome(Item))
		{
			palindromeWords->push_back(Item);
			//std::cout << "added " << Item << " to list\n";
		}
	}

	std::cout << "---> evaluated every string passed <---" << std::endl;
}


bool Palindrome::isPalindrome(const std::string& wordPassed)
{
	int RHS = wordPassed.length() - 1;
	int LHS = 0;
	while (LHS < RHS) // the only time this will fail is when they are both at the center or piviot of the word
	{

		if (wordPassed.at(LHS) != wordPassed.at(RHS)) // the char at that point are not equal
		{
			//std::cout << wordPassed.at(LHS) << " does not equal " << wordPassed.at(RHS) << std::endl; //used for debug, shows where a word failed the test.
			return false;
		}
		++LHS; // move forward from left
		--RHS; // move downward from right
	};

	return true;

}



void Palindrome::InitiateList(std::vector<std::string>* PassedVector)
{
	

	std::string inputedSeries;
	std::stringstream ss;
	std::string Word;

	std::cout << "~~> Enter a comma seperated list of words you like to be evaluated:";
	std::cin >> inputedSeries;
	ss << inputedSeries;
	ss << '\0'; // re-add null term char


	for (char i; ss >> i;)
	{
		if (i == '\0' || i == ',') // either end of list OR a comma has been read -> end of word
		{
			std::cout << "i == " << i << std::endl;
			PassedVector->push_back(Word);
			std::cout << "the word \"" << Word << "\" has successfully been entered for evaluation" << std::endl;
			Word = "";
		}
		else
		{
			Word += i; //append i to word
		}

	}



	std::cout << "...leaving initation, evaluating your entered words." << std::endl;
	Evaluate();
}

std::ostream& operator<<(std::ostream& os, const Palindrome* obj)
{
	std::cout << "The words you entered that are palindromes are:";
	
	if (obj->palindromeWords->size() == 0)
	{
		std::cout << "* none of your words were palindromes *" << std::endl;
	}

	for (auto word : *obj->palindromeWords)
	{
		std::cout << "- " << word << std::endl;
	}

	return os;
}