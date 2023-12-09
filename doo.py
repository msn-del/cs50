import csv

with open("data.csv", "r") as file:
  reader = csv.DictReader(file)
  conts = {}
  for row in reader:
        favorite = row["problem"]
        if favorite in conts:
           conts[favorite] += 1
        else:
             conts[favorite] = 1
def get_value(language):
    return conts[language]

for favorite in sorted(conts, key=lambda problem: conts[problem]):
     print(f"{favorite}:{conts[favorite]}")