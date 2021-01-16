#Montado automaticamente pelo script 6.py
d = {'AAA': 'A', 'AAC': 'B', 'AAG': 'C', 'AAT': 'D', 'ACA': 'E', 'ACC': 'F', 'ACG': 'G', 'ACT': 'H', 'AGA': 'I', 'AGC': 'J', 'AGG': 'K', 'AGT': 'L', 'ATA': 'M', 'ATC': 'N', 'ATG': 'O', 'ATT': 'P', 'CAA': 'Q', 'CAC': 'R', 'CAG': 'S', 'CAT': 'T', 'CCA': 'U', 'CCC': 'V', 'CCG': 'W', 'CCT': 'X', 'CGA': 'Y', 'CGC': 'Z'}
inp = ""


while (inp != "0"):
	inp = input("Chipertext: ")

	print("Plaintext: ", end="")
	for i in range(0, len(inp), 3):
		aux = inp[i:i+3]
		
		if (aux in d):
			print(d[aux], end="")
		else:
			print(" ", end="")

	print("\n")
