def isPrime(x):
	for i in range(2, x):
		if (x % i == 0):
			return 0
	
	return 1


p = int(input("Digite P (par): "))


for i in range(2, p):
	if (isPrime(i) == 1):
		if (isPrime(p-i) == 1):
			print(i, p-i)
			break
