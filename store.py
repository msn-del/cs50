from cs50 import get_int
from cs50 import get_string
import csv
file_store = "contacter.csv"

def write():
         l[contacts] = []
         n = get_int("how many contacts? ")
         for n in range(n):
              names =  get_string("name: ")
              numbers = get_int("number: ")
              contact = [names, numbers]
              with open(file_store, "a") as file:
                   file.write("\ncontact: \n")
                   file.write("\n".join(map(str, contact)))
              l[contacts] = [contact]
         print(f"Data stored successfully in {file_store}")