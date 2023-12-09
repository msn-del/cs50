file_path = "contacter.c"
order = input("do yo want to add something? ")
n = input("how many contacts? ")
if order in "add":
   for n in [n]:
     name = input("name: ")
     number = input("number: ")
     with open(file_path, "w") as file:
          file.write("name:  ", {name)}
          file.write("number: ", number)

print(f"Data stored successfully in {file_path}.")