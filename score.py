from cs50 import get_float
score = []
for i in range(5):
 score = get_float("math: ")

total = score[i] * 7 + score[ i + 1] * 7 + score[i + 2] * 5 + score[ i +3 ] * 2 + score[i + 4] * 2

average = total / 23
print(f"average:  {average}")