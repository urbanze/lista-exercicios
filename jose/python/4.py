n = int(input("Digite N: "))
vt = [0, 1]

for i in range(2, n):
	vt.append(vt[i-2] + vt[i-1])

for i in range(n):
	print(vt[i])
