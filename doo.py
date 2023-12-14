from cs50 import SQL

db = SQL("sqlite:///data.db")

data = input("what's the problem: ")
rows = db.execute("SELECT CONT(*) AS n WHERE problem = 'Mario'")
for row in rows:
    print(row["n"])
