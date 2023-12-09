file_path = "contacter.py"
order = input("do yo want to add something? ")
n = input("how many contacts? ")
if order in "add":
   for n in [n]:
     names = input("name: ")
     numbers = input("number:"end="")
     with open(file_path, "w") as file:
         file.write(name)
         file.write(number)

print(f"Data stored successfully in {file_path}.")