
order = input("do yo want to add something? ")
 = input("how many contacts? ")
if order in "yes":
    i = 0
    for number in range(n)
    name = input("name: ")
    number = input(number: ")

# Specify the file path
file_path = "contact"  # Change this to the desired file path and name

# Open the file in write mode and write the user input
with open(file_path, "w") as file:
    file.write(user_input)

print(f"Data stored successfully in {file_path}.")