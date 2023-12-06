from cs50 import get_string
answer = get_string("are you gay? ")
while answer.lower() in ["no"]:
    answer2 = get_string("are you gay? ")
if answer2.lower() in ["yes"]:
    print("yes i knew it hhhh")