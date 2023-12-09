from cs50 import get_int
from cs50 import get_string
file_store = "contacter.py"
contacts = []
order = get_string("do yo want to add something? ")
if order.lower() in ["add", "yes"]:
       n = get_int("how many contacts? ")
       for n in range(n):
            contacts = [names := get_string("name: "), numbers := get_int("number: ")]
       with open(file_store, "w") as file:
              list_as_string ='\n'.join(contacts)
              file.write(list_as_string)
       print(f"Data stored successfully in {file_store}.")
else:
    print("syntase error")
