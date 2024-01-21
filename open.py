from cs50 import get_string
answer = get_string("do you want to open this app?")
if answer in ["ok"]:
      password = get_string("password: ")
      if password in ["1234"]:
           print("opened succefully")
      else:
           print("wrong password")
else:
   print("syntaxe error")