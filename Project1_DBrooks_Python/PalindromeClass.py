import typing

# my modules
import Utilities



class palindrome:
    """palindrome class"""

    Words_that_are_Palindromes = []

    def __init__(self, UserListPassed: list):
        self.UserInput_list = UserListPassed #this is a class attribute that will hold a empty list

    def evaluate_WordsSubmitted(self):
        print("Evaluating entered words...")
        for word in self.UserInput_list:
            if Utilities.is_palindrome(word):
                self.Words_that_are_Palindromes.append(word)