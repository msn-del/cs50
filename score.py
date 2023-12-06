from cs50 import get_int
n = get_int("how many scores? ")
scores = []
i = 0
for i in range (n):
 score = get_int("score: ")
 scores.append(score)

average = sum(scores) / n
print(f"average:  {average}")