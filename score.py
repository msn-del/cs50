from cs50 import get_float
n = get_float("how many scores? ")
scores = []
i = 0
while i < n:
 score = input("score: ")
 scores.append(score)

average = sum(scores) / n
print(f"average:  {average}")