n = int(input())
database = {}
for i in range(n):
    name = input()
    if name in database:
        print(name + str(database[name]))
        database[name] += 1
    else:
        print("OK")
        database[name] = 1