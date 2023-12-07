n = input("how many scores? ")
scores = []
i = 0
for i in n:
 score = input("score: ")
 scores.append(score)

average = sum(scores) / n
print(f"average:  {average}")