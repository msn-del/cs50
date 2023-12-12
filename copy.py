from cs50 import get_int
from cs50 import get_string

file_store = "contacter.py"

order = get_string("do yo want to add or search for someone? ")
if order.lower() in ["add"]:
       n = get_int("how many contacts? ")
       for n in range(n):
              names =  get_string("name: ")
              numbers = get_int("number: ")
              contacts = names, numbers
              with open(file_store, "a") as file:
                    file.write("\ncontacts = \n")
                    file.write("\n".join(map(str, contacts)))

       print(f"Data stored successfully in {file_store}.")

if order in ["search"]:
      name = get_string("wich one? ")
      with open(file_store, "a") as file:
          if name in file_store:
              print("found")
          else:
              print("not found")
else:
    print("syntase error")
