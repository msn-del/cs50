from cs50 import get_int
from cs50 import get_string
import csv
from store import write
from search import find

order = get_string("do yo want to add or search for someone? ")

if order.lower() in ["add"]:
       write()
elif order.lower() in ["search"]:
       find()
else:
       print(f"syntaxe error")