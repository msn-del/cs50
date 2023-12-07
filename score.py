from cs50 import get_int
from cs50 import get_float
scores = []
i = 0
for i in range(5):
 score = get_float("score: ")
 scores.append(score)

average = sum(scores) / n
print(f"average:  {average}")