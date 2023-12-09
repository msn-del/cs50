import csv

with open("data.csv", "r") as file:
  reader = csv.reader(file)
  Scratch, Python, C = 0, 0, 0
  for row in reader:
        favorite = row[1]
        if favorite == "scratch":
             Scratch += 1
        if favorite == "C":
             C += 1
        if favorite == "Python":
             Python += 1