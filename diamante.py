n = int(input())

def indexOf(text, char):
    try: return text.index(char)
    except: return -1

diamantes = []

for t in range(n):
    cont = 0
    string = input()
    while True:
        i = indexOf(string, "<")
        string = string[:i] + string[i + 1:]

        i2 = indexOf(string[i:],">")
        string = string[:i2] + string[i2 + 1:]

        if i == -1 or i2 == -1:
            break
        else:
            cont+=1
    diamantes.append(cont)
for n_diamantes in diamantes:
    print(n_diamantes)