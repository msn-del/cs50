from cs50 import get_string
answer = get_string("are you gay? ")
while answer.lower() != "yes" or "no":
    answer = get_string("are you gay? ")
    if answer == "yes":
          break
    while answer.lower() in ["no"]:
     answer = get_string("are you gay? ")

     
if answer.lower() in ["yes"]:
         print("yes i knew it hhhh")