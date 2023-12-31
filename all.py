file_store = "contacter.csv"

#question for the user
order = input("do yo want to add or search for someone? ")

#add people
if order.lower() in ["add"]:
         n = input("how many contacts? ")
         for n in range(n):
              names =  input("name: ")
              numbers = input("number: ")
              contact = [names, numbers]
              with open(file_store, "a") as file:
                   file.write("\ncontact: \n")
                   file.write("\n".join(map(str, contact)))
         print(f"Data stored successfully in {file_store}")

#search for someone
elif order.lower() in ["search"]:
          name = input("wich one? ")
          with open(file_store, "r") as file:
                  if name in file.read():
                      print(f"found")
                  else:
                      print(f"not found")
else:
       print(f"syntaxe error")