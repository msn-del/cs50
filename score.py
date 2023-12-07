from cs50 import get_float
score = []
 score1 = get_float("math: ")
 score2 = get_float("physique: ")
 score3 = get_float("svt: ")
 score4 = get_float("philo: ")
 score5 = get_float("english: ")
 total = score1 * 7 + score2 * 7 + score3 * 5 + score4 * 2 + score5 * 2

average = total / n
print(f"average:  {average}")