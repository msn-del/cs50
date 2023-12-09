order = input("do yo want to add something? ")
n = input("how many contacts? ")
if order in "yes":
    for number in [n]:
        name = input("name: ")
        number = input("number: ")

file_path = "contact"

with open(file_path, "w") as file:
    file.write(name, number_input)

print(f"Data stored successfully in {file_path}.")