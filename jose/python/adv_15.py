n = int(input("Digite N: "))
series = []

for i in range(n):
	tmp = input("Serie %d: " % (i+1))
	series.append(tmp.split())


for i in series:
	tmp = 0

	for j in series:
		if (i is j): continue
		if (int(i[1]) > int(j[2]) or int(i[2]) < int(j[1])):
			tmp += 1

	if (tmp == n-1):
		print("OK:", i[0])
