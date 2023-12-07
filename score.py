from cs50 import get_float
score = []

score = get_float("math: ")
score = get_float("physique: ")
score = get_float("svt: ")
score = get_float("philo: ")
score = get_float("english: ")
total = score * 7 + score * 7 + score * 5 + score * 2 + score * 2

average = total / 23
print(f"average:  {average}")