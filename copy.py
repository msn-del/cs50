order = input("do yo want to add something? ")
n = input("how many contacts? ")
for order in "add":
    for n in [n]:
        name = input("name: ")
        number = input("number: ")

file_path = "contacter.c"

with open(file_path, "w") as file:
    file.write(name)
    file.write(number)


print(f"Data stored successfully in {file_path}.")