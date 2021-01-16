n = int(input("Digite N: "))
txt = input("Digite o txt: ")


for i in txt:
	if not(ord(i) >= 97 and ord(i) <= 122):
		txt = txt.replace(i, " ")

l = txt.split()
tt = 0
for i in l:
	aux = []
	for j in i:
		if (j in aux): continue
		aux.append(j)
		if (i.count(j) == n): tt += 1

print(tt)


#5
#asdfg..lk..ujjmjh...lkium
#Resposta do PDF: 2
#Esta errado!
