#ifndef Project_Utilites
 #define Project_Utilites

#include <string>
#include <vector>
#include <list>
#include <iostream>



class Palindrome
{
public:
	Palindrome() { UserProvidedWords = new std::vector <std::string>; palindromeWords = new std::list<std::string>; InitiateList(UserProvidedWords); };
	~Palindrome() { delete palindromeWords; delete UserProvidedWords; };

	void InitiateList(std::vector<std::string>*); //used to ask end user to input a list of words.
	void Evaluate();
	bool isPalindrome(const std::string&);
	
	//friend std::ostream& operator<<(std::ostream& os, const Palindrome& obj);
	friend std::ostream& operator<<(std::ostream& os, const Palindrome* obj);

private:
	std::list<std::string>* palindromeWords = nullptr;
	std::vector<std::string>* UserProvidedWords = nullptr;
};













#endif // !Project_Utilites



