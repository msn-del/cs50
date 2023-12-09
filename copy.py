file_path = "contacter.c"
order = input("do yo want to add something? ")
n = input("how many contacts? ")
if order in "add":
   for n in [n]:
     names = input("name: ")
     numbers = input("number: ")
     with open(file_path, "w") as file:
          file.write(names)
          file.write(numbers)

print(f"Data stored successfully in {file_path}.")