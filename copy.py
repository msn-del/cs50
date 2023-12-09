file_path = "contacter.py"
order = input("do yo want to add something? ")
n = input("how many contacts? ")
if order in "add":
   for n in [n]:
     names = input("name: ")
     numbers = input("number: ")
     with open(file_path, "w") as file:
         print(names, end="")
         print(numbers, end="")

print(f"Data stored successfully in {file_path}.")