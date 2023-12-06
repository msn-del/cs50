from cs50 import get_int
n = get_int("how many scores? ")
score = []
i = 0
for i in range (n):
 score = get_int("score: ")

average = sum(score) / n
print(f"average:  {average}")