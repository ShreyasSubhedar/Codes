
# Hangman game assignment 
# Dev: ShreyasX'O
# ALGO:

"""
1. Player 1  choose the word
2. Player 2 will guess the word
3. Every wrong answer(alphabet) will draw the hangman bit by bit.
4. Game continues till player 2 would have won/lose(hangman drawing completes)
"""

import time
from os import system
"Player one will choose these words"
"word: hint"
word_dictionary={
    "SKODA":"Its about 4 vilar with awesome feature ",
    "IPHONE": "You can connect with your girlfriend with this (If you have one 😬)",
    "PIRPLE": "Make yourself highest in the room by getting skill ready",
    "GLASS":"Transparency is the key to management ",
    "PEN":"You cannot sign an autograph although you are famous without this"
}

print("Player 1 choose the word quickly")
for i,_ in word_dictionary.items():
  print(i)
system('clear') 
choice=input("Enter your choice(Type the word)")


hangman=[" ❗"," ❗"," ❗"," 😑"," ❗","➖➖"," ❗","🖋🧪"]

wrong_ans=0
show= ["-"]*len(choice)
if choice.upper() in word_dictionary.keys():
  choice = choice.upper()
  temp_choice = list(choice)
  print(temp_choice)
  while(True):
    if "-" not in show:
      print("Pass: You guess it right")
      break
    if wrong_ans >=8:
      print("Failed")
      break
    print(word_dictionary[choice])
    for i in range(wrong_ans):
      print(hangman[i])
    print(show)
    guess = input("Guess the character")
    guess=guess.upper()
    if guess in temp_choice:
      show[temp_choice.index(str(guess))]=guess
      temp_choice[temp_choice.index(str(guess))]="!"
    else:
      wrong_ans+=1
else:
  print("Choose the right word")
