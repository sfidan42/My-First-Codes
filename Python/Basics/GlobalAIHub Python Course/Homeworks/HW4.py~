#HW4
#day5
from random import choice
#read the txt file to import a word for hangman.

def file_read():
    print("If you don't have a name for file , just hit enter.")
    fname=input("Please choose a file name which includes words line by line:")
    
    if len(fname)==0:
        fname="words.txt"

    words_file = open('words.txt', 'r')
    words=[]
    while True:
        # Get next line from file
        line = words_file.readline()
        # if line is empty
        # end of file is reached
        if not line:
            break
        words.append(line.strip())
    words_file.close()
    return words

def set_limit(words,lim1,lim2):
    words2=[]
    for word in words:
        if lim1<len(word)<lim2:
            words2.append(word)
    return words2

shapes=[
""" ________ \n |       | \n |         \n |          \n |         \n |          \n A \nA A""",
""" ________ \n |       | \n |       O \n |          \n |         \n |          \n A \nA A""",
""" ________ \n |       | \n |       O \n |       |  \n |         \n |          \n A \nA A""",
""" ________ \n |       | \n |       O \n |       |\ \n |         \n |          \n A \nA A""",
""" ________ \n |       | \n |       O \n |      /|\ \n |         \n |          \n A \nA A""",
""" ________ \n |       | \n |       O \n |      /|\ \n |       | \n |          \n A \nA A""",
""" ________ \n |       | \n |       O \n |      /|\ \n |       | \n |      /   \n A \nA A""",
""" ________ \n |       | \n |       O \n |      /|\ \n |       | \n |      / \ \n A \nA A""",]
class Node:
    def __init__(self, HangShape=None):
        self.HangShape = HangShape
        self.NextNode = None

class LinkedList:
    def __init__(self):
        self.Head = None

# Function to add newnode
    def AtEnd(self, newdata):
        NewNode = Node(newdata)
        if self.Head is None:
            self.Head = NewNode
            return
        laste = self.Head
        while(laste.NextNode):
            laste = laste.NextNode
        laste.NextNode=NewNode

# The list is linked here:
my_linked_list= LinkedList()
my_linked_list.Head=Node(shapes[0])
for i in range(1,len(shapes)):
    my_linked_list.AtEnd(shapes[i])



# The algorithm:
# Startup:
print("Welcome to the Hangman Game!")

words=file_read()

max_element=max(words,key=len)
min_element=min(words,key=len)
print(f"Please enter two different numbers between {len(min_element)}-{len(max_element)}")
lim1,lim2=int(input()),int(input())
if lim1>lim2:
    lim1,lim2=lim2,lim1

print(f"Length of the word is set for the game as in between {lim1}-{lim2}")

words2=set_limit(words,lim1,lim2)
word=choice(words2).upper() # choose an element randomly.

print("\n Game Start!")
value=my_linked_list.Head.HangShape
print(value)
guess=[]
for i in range(len(word)):
    guess.append("_")
# guess is a list here.

print("".join(guess))
currentnode=my_linked_list.Head.NextNode
used_false_letters=[]

# Func to find all locations of an element and storing their indexes in a list:
def find_all(s, ch):
    return [i for i, ltr in enumerate(s) if ltr == ch]

# Code for gameplay:
while True:
    print(f"The length of the word is {len(word)}")
    while True:
        inp_check=True
        inp=input("Please enter your guess: ").upper()
        for i in range(len(inp)):
            if not inp[i].isalpha(): # if the input includes not alphabetic digit, say false.
                inp_check=False

        if inp_check: # if the input is alphabetic:
            break
        else:
            print("Please enter a word or letter which includes alphabetic digits:")

    locations=find_all(word,inp)
    l=len(locations)
    if l>0: # if any location is found:
        for location in locations:
            print ("Correct! ")
            if len(inp)==1: # if the inp is a letter:
                guess[location]=word[location] #replace
    elif l==0: # if no location:
        print ("False!")
        if len(inp)==1: # if the inp is a letter:
            used_false_letters.append(inp)
        value=currentnode.HangShape
        currentnode=currentnode.NextNode
    print(value) # Show the hangman shape.
    print("".join(guess)) # printed the list guess as str without converting it into a str.
    print(f"USED: {used_false_letters} ")
    if currentnode.HangShape==shapes[-1]:
        print("You lost!")
        break
    elif inp==word or "".join(guess)==word:
        print("You won!")
        break
