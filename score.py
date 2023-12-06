from cs50 import
n = get_doubt("how many scores? ")
scores = []
i = 0
for i in range(n):
 score = get_float("score: ")
 scores.append(score)

average = sum(scores) / n
print(f"average:  {average}")