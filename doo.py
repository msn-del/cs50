import csv

with open("data.csv", "r") as file:
  reader = csv.reader(file)
  for row in reader:
        favorite = row[1]
        print("language:  ", favorite)