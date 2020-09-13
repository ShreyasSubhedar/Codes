import sys
from termcolor import colored, cprint
print_red_white = lambda x: cprint(x, 'red', 'on_white')
print_blue_white = lambda x: cprint(x,'blue', 'on_white')
board = [["-" for i in range(7)] for j in range(6)]
 
# checkWin is for winning condition checking 
def checkWin(tile):
    # check horizontal spaces
    for y in range(7):
        for x in range(3):
            if board[x][y] == tile and board[x+1][y] == tile and board[x+2][y] == tile and board[x+3][y] == tile:
                return True

    # check vertical spaces
    for x in range(6):
        for y in range(4):
            if board[x][y] == tile and board[x][y+1] == tile and board[x][y+2] == tile and board[x][y+3] == tile:
                return True

    # check / diagonal spaces
    for x in range(3):
        for y in range(3, 7):
            if board[x][y] == tile and board[x+1][y-1] == tile and board[x+2][y-2] == tile and board[x+3][y-3] == tile:
                return True

    # check \ diagonal spaces
    for x in range(3):
        for y in range(4):
            if board[x][y] == tile and board[x+1][y+1] == tile and board[x+2][y+2] == tile and board[x+3][y+3] == tile:
                return True

    return False

def print_board():
  for i in range(7):
    print("  "+str(i+1),end="  |")
  print()
  print("-------------------------------------------")
  for i in board:
    b=False
    for j in i:
      if j=="X":
        text = colored('🔴', 'red', 'on_white')
        print(" "+text,end="  |")
      elif j=="O":
        text = colored('⚪', 'blue','on_white')
        print(" "+text,end="  |")
      else:
          print("  "+j,end="  |")
    print()
    print("-------------------------------------------")
  
i=0
while True :
  print_board()
  if i % 2== 0:
    choice =int(input(print_red_white("Player 1 (🔴): Enter column number  (1 to 7):")))
  else:
    choice =int(input(print_blue_white("Player 2 (⚪): Enter column number  (1 to 7):")))

  if not (choice >=1 and choice<=7):
    (print_red_white("Enter valid Column Number"))
    continue
  temp=-1
  for i1 in range(6):
    if board[i1][choice-1]=="-":
      temp=i1
    else:
      break
  if temp==-1:
    print("Tie")
    break
  if i %2==0:
    board[temp][choice-1]="X"
    i+=1
    if checkWin("X") ==False:
      continue
    else:
      print_red_white("Player 1 (🔴) wins the game ")
      break

  if i%2==1:
    board[temp][choice-1]="O"
    i+=1
    if checkWin("O") ==False:
      continue
    else:
      print_blue_white("Player 2 (⚪) wins the game ")
      break

print_board()