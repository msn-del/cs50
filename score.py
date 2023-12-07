from cs50 import get_int
from cs50 import get_float
n = get_int("how many scores? ")
scores = []
i = 0
for i in range(n):
 score = get_float("score: ")
 scores.append(score)

average = sum(scores) / n
print(f"average:  {average}")