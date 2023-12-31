from cs50 import get_string
from store import write
import csv
file_store = "contacter.csv"

def find():
       name = get_string("wich one? ")
       with open(file_store, "r") as file:
                if name in file.read():
                    print(f"found")
                else:
                    print(f"not found")