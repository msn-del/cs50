import csv

with open("data.csv", "r") as file:
  reader = csv.reader(file)
  for row in reader:
        favorite = row[1]
        if favorite in ["python"]:
            print(row[1])