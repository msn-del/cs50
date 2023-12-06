from cs50 import get_int
score = []
n = get_int("how many scores? ")

i = 0
for i in range (n):
 score = get_int("score: ")
average = sum (score) / len (score)
print(f"average:  {average}")