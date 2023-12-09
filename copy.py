from cs50 import get_int
file_path = "contacter.py"
order = input("do yo want to add something? ")
n = get_int("how many contacts? ")
if order in "add":
   for n in range(n):
       names = input("name: ")
       numbers = input("number:")
       with open(file_path, "w") as file:
          file.write("name: ")
          file.write(names + '\n')
          file.write("number: ")
          file.write(numbers + '\n')

print(f"Data stored successfully in {file_path}.")