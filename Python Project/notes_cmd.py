# Homework Input-Output Stream + (File I/O)

# Problem statement
#  Create note taking application :
'''     1. ask for filename
        2. if file does not exist then create one and write some notes in it.
        3. if file exist then ask 3 options:
                A) Read the file
                B) Delete the file and start over
                C) Append the file
                D) Replace a single line (Extra Credit)
'''

import os

filename = input("Enter File Name")

if os.path.exists(filename):
    choice=input("A) Read the file\n\nB) Delete the file and start over\n\nC) Append the file\n\nD)Replace a single line")
    if choice =="A":
        file = open(filename, 'r')
        for line in file:
            print(line) 
        file.close()
    elif choice=="B":
        content = input("Enter notes in the empty file")
        os.remove(filename)
        file = open(filename,'w')
        file.write(content+"\n")
        file.write("\n")

        file.close()
    elif choice=="C":
        content = input("Enter notes in file")
        file = open(filename,'a')
        file.write(content+"\n")

    else:
        line_no = int(input("Enter line number"))
        content = input("Enter Notes")
        file = open(filename,'r')
        data = file.readlines()
        data[line_no]=content+"\n"
        file.close()
        file = open(filename,'w')
        file.writelines(data)
        file.close()
else:
    content = input("Enter notes")
    file = open(filename,'w')
    file.write(content+"\n")
    file.close()

    






