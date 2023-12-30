from cs50 import get_string
import csv
file_store = "contacter.csv"

def find():
       name = get_string("wich one? ")
       with open(file_store, "r") as file:
                if name in file.read():
                     print(found)
                else:
                    print(f"not found")