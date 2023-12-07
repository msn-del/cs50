from cs50 import get_float
score = []
i = 0
for i in range(5):
 score = get_float("math: ")
 
total = score * 7 + score * 7 + score * 5 + score * 2 + score * 2

average = total / 23
print(f"average:  {average}")