from cs50 import get_string
from cs50 import get_int

answer = get_string("do you want to open this app?")
  if answer.lower() in ["yes"]:
      password = get_int("password: ")
      if password in ["4268"]:
         print("opened succefully")
      else:
         print("wrong password")
  else:
   print("syntaxe error")