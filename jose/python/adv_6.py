vt = []

def show():
	for i in range(m):
		print("%c" % vt[i], end="")
	
	print("")

def update():
	vt[m-1] += 1

	for i in range(len(vt)-1, -1, -1):
		if (vt[i] == 65+n):
			vt[i] = 65
			vt[i-1] += 1


n = int(input("Digite N: "))
m = int(input("Digite M: "))
k = int(input("Digite K: "))


#Cria o vetor
for i in range(m):
	vt.append(65)

#Atualiza K vezes
for i in range(0, k-1):
	update()

show()
