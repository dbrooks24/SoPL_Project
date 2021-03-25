import typing

def is_palindrome(word: str)->bool:
    reversed_word = word[::-1] #use built in slice and step operation in python: start ar end, work backwards by 1 step.
    if reversed_word == word:
        return True
    else:
        return False

# simple function to take in a list object and return a string that has the list eliments deliminated by the passed deliminator
def list_to_string(listObj: list, deliminator: str)->str:
    return deliminator.join(listObj)