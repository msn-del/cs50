from cs50 import get_int
from cs50 import get_string
file_store = "contacter.csv"
contacts = []
#question for the user
order = get_string("do yo want to add or search for someone? ")

#add people
if order.lower() in ["add"]:


         n = get_int("how many contacts? ")
         for n in range(n):
              names =  get_string("name: ")
              numbers = get_int("number: ")
              with open(file_store, 'wb') as file:
                  pickle.dump(contacts, file)
            with open(file_store, 'rb') as file:
                 loaded_list = pickle.load(file)







#search for someone
elif order.lower() in ["search"]:
          name = get_string("wich one? ")
          with open(file_store, "r") as file:
                  if name in file.read():
                      print(contact[names, numbers].name)
                  else:
                      print(f"not found")
else:
       print(f"syntaxe error")