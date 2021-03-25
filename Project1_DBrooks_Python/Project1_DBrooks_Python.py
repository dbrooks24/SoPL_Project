#Project1 - David Brooks --- Python Eidtion


# Warning: I am new to python and am learning this as I go to be honest, so please forgive the code LOL

import typing

# my modules
import PalindromeClass
import Utilities

#below is a function used for generating and returning a list of words that the user entered
def welcome_init()->list: 
    welcomeString = "Welcome to David Brooks's Project! (Object Oriented Python 3)"
    print(welcomeString)
    #ask the user to enter a comma seperated list. This string is then split using the split function.
    UsersList = input("please enter in a list of comma seperated words... ->").split(',') 

    
    usr_Acknowledgement = input("just to confirm you typed: \"" + Utilities.list_to_string(UsersList," , ") + "\" is this correct? [y/n]->")

    if usr_Acknowledgement == "y":
        print("Thank you for informing me I got it right, continuing with program...")
        return UsersList
    else:
        print("Oh no! lets try that again...")
        welcome_init()




List_of_Users_words = welcome_init()

palindrom_Obj = PalindromeClass.palindrome(List_of_Users_words)
palindrom_Obj.evaluate_WordsSubmitted()

print("...the results are in!")
print("\nThe words that are palindromes are: ", end='') #dont print a newline
print(Utilities.list_to_string(palindrom_Obj.Words_that_are_Palindromes," , "))

print("\n\n------>> Thank you for using my program! stay safe! <<------")