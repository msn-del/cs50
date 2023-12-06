from cs50 import get_string
n = get_string("are you gay? ")
if n.lower() in ["no"]:
    n = get_string("are you gay? ")
else n.lower() in ["yes"]:
    print("yes i knew it hhhh")