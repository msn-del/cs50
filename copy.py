from cs50 import get_int
from cs50 import get_string

file_path = "contacter.py"

order = get_string("do yo want to add something? ")
n = get_int("how many contacts? ")
if order = "add":
   for n in range(n):
       names = input("name: ")
       numbers = input("number:")
       with open(file_path, "w") as file:
          file.write("name: ")
          file.write(names + '\n')
          file.write("number: ")
          file.write(numbers + '\n')
else:
    print("syntase error")
print(f"Data stored successfully in {file_path}.")