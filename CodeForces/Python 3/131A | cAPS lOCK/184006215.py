n = input()
if (n.isupper()):
    print(n.lower())
elif n[0] == n[0].lower() and n[1:] == n[1:].upper():
    print(n[0].upper() + n[1:].lower())
else:
    print(n)