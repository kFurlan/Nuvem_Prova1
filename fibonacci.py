m = [0] * 45;

def fibonacci(n):
   if (m[n]): return m[n]
   if n <= 1:
       return n
   m[n] = (fibonacci(n-1) + fibonacci(n-2))
   return m[n]

def main():
    N = int(input("Insira o valor de N menor que 45: "))
    if (N < 45):
        print(fibonacci(N))
    else:
       exit("N não é menor que 45")
main()

