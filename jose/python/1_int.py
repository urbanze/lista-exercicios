n = int(input("Digite N: "))
x = []

for i in range(n):
	tmp = []

	for j in range(5):
		inp = int(input(""))
		tmp.append(inp)
	
	x.append(tmp)


for i in range(n):
	if (i & 1):
		x[i].sort(reverse=True)
	else:
		x[i].sort()
	
	print(x[i])
