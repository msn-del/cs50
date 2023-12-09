import csv

with open("data.csv", "r") as file:
  reader = csv.reader(file)
  for row in reader:
        if row in ["python"]:
            print(row[1])