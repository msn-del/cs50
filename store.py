from cs50 import get_int
from cs50 import get_string
import csv
file_store = "contacter.csv"
def write():
         contacts = []
         n = get_int("how many contacts? ")
         for n in range(n):
              names =  get_string("name: ")
              numbers = get_int("number: ")
              contact = [names, numbers]
              with open(file_store, "a") as file:
                   contacts = contact
                   file.write("\ncontacts: \n")
                   file.write("\n".join(map(str, contacts)))
         print(f"Data stored successfully in {file_store}")