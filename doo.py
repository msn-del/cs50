import csv

with open("data.csv", "r") as file:
  reader = csv.DictReader(file)
  Scratch, Python, C = 0, 0, 0
  for row in reader:
        favorite = row["language"]
        if favorite == "Scratch":
             Scratch += 1
        elif favorite == "C":
             C += 1
        elif favorite == "Python":
             Python += 1

print(f"Scratch, {Scratch}")
print(f"C, {C}")
print(f"Python, {Python}")