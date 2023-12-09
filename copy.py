user_input = input("Enter data to store in the file: ")

# Specify the file path
file_path = "output.txt"  # Change this to the desired file path and name

# Open the file in write mode and write the user input
with open(file_path, "") as file:
    file.write(user_input)

print(f"Data stored successfully in {file_path}.")