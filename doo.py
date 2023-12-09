import csv

with open("data.csv", "r") as file:
  reader = csv.DictReader(file)
  conts = {}
  for row in reader:
        favorite = row["language"]
        if favorite =
