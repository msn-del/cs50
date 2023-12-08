import csv

with open("data.csv", "r") as file:
    reader = csv.reader(file)
    for row in reader:
        for row[1] in ["Python"]:
            print(row[1])

    for row in reader:
        for row[1] in ["C"]:
            print(row[1])