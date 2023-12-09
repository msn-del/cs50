# Get input from the user
user_input = input("Enter some text: ")

# Open a file in write mode
with open("output.txt", "a") as file:
    # Write the user input to the file
    file.write(user_input)

print("Data has been written to the file.")