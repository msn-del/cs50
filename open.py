from cs50 import get_string
from cs50 import get_int

question = get_string("do you want to open this app?")
  if question in ["yes"]:
      password = get_int("password: ")
      if password in ["4268"]:
         print("opened succefully")
      else:
         print("wrong password")
  else:
   print("syntaxe error")