txt = "B,A=25,B,A=29,R,C,B=50"
l = txt.split(",")
ram = []
queue = []

for i in range(len(l)):
	if ("B" in l[i]) and ("=" not in l[i]):
		queue.append(l[i+1])
		i += 2
		#print("Q1", queue)

	elif ("R" in l[i]) and ("=" not in l[i]):
		queue.pop()
		#print("Q2", queue)

	elif ("C" in l[i]) and ("=" not in l[i]):
		ram.append(queue[-1])
		queue.pop()
		#print("R1", ram)

print(ram)

"""
Julgo esse enunciado errado, pois é dito que 'R' defaz a ultima transacao aberta
, porém, após 'C', a última não está mais aberta.

Também julgo que operações como "B=50" sem o inicio de uma transação não devem
ser salvos na memória, pois não foi solicitado a abertura.
"""
