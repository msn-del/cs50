from cs50 import get_int
from cs50 import get_string

order = get_string("do yo want to add something? ")
if order.lower() in ["add", "yes"]:
       n = get_int("how many contacts? ")
       for n in range(n):
           names = input("name: ")
           numbers = input("number:")
           with open(contacter.py, "w") as file:
               file.write("name: ")
               file.write(names + '\n')
               file.write("number: ")
               file.write(numbers + '\n')
       print(f"Data stored successfully in {file_path}.")
else:
    print("syntase error")
