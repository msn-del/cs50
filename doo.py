import csv

with open("data.csv", "r") as file:
  reader = csv.DictReader(file)
  conts = {}
  for row in reader:
        favorite = row["language"]
        if favorite in conts:
           conts[favorite] += 1
        else:
             conts[favorite] = 1

for favorite in sorted(conts, reverse=True):
     print(f"{favorite}:{conts[favorite]}")