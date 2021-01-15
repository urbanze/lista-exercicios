import copy

tbl_org1 = [['0', '0', '0', '0', '0', '0', '0', '0'], ['0', 'C', '0', '0', '0', '0', '0', '0'], ['0', '0', '0', '0', '0', '0', '0', '0'], ['0', '0', 'T', '0', '0', '0', '0', '0'], ['0', '0', '0', '0', 'Q', '0', '0', '0'], ['0', 'B', '0', '0', '0', '0', '0', '0'], ['0', '0', '0', 'K', '0', '0', '0', '0'], ['0', '0', '0', '0', '0', '0', '0', '0']]
tbl_org2 = [['0', '0', '0', '0', '0', '0', '0', '0'], ['0', 'T', '0', '0', '0', '0', '0', '0'], ['0', '0', '0', '0', '0', '0', '0', '0'], ['0', '0', '0', '0', '0', '0', '0', '0'], ['0', '0', '0', '0', 'Q', '0', '0', '0'], ['0', '0', '0', 'K', '0', '0', '0', '0'], ['0', '0', 'B', '0', '0', '0', '0', '0'], ['0', 'C', '0', '0', '0', '0', '0', '0']]
tbl_org3 = [['0', '0', '0', '0', '0', '0', '0', '0'], ['0', '0', '0', '0', '0', '0', '0', '0'], ['0', '0', '0', '0', '0', '0', '0', '0'], ['0', '0', '0', '0', '0', '0', '0', '0'], ['0', '0', '0', '0', 'T', '0', '0', '0'], ['0', '0', '0', 'K', '0', '0', '0', '0'], ['0', '0', 'C', '0', '0', '0', '0', '0'], ['0', '0', '0', '0', '0', '0', '0', '0']]

#Retorna a posicao da peça 'p' no tabuleiro
def search(p):
	for i in range(8):
		for j in range (8):
			if (tbl[i][j] == p):
				return (i, j)
	
	return None

#Peça 'A' come peça 'B'
def come(a, b):
	if (a != None and b != None):
		pa = tbl[a[0]][a[1]]
		tbl[a[0]][a[1]] = '0'
		tbl[b[0]][b[1]] = pa

#Verifica se torre (T) consegue comer alguma peça
def t_check(pos):
	for i in range(8):

		#Vertical
		if (tbl[i][pos[1]] not in ('0', 'T')):
			return (i, pos[1])
		
		#Horizontal
		if (tbl[pos[0]][i] not in ('0', 'T')):
			return (pos[0], i)
	
	return None

#Verifica se cavalo (C) consegue comer alguma peça
def c_check(pos):
	#Diagonal direito-baixo
	x = pos[0]+1; y = pos[1]+2
	if (x >= 0 and x < 8 and y >= 0 and y < 8):
		if (tbl[x][y] not in ('0', 'C')):
			return (x, y)
	
	#Diagonal direito-cima
	x = pos[0]-1; y = pos[1]+2
	if (x >= 0 and x < 8 and y >= 0 and y < 8):
		if (tbl[x][y] not in ('0', 'C')):
			return (x, y)
	
	#Diagonal esquerdo-cima
	x = pos[0]-1; y = pos[1]-2
	if (x >= 0 and x < 8 and y >= 0 and y < 8):
		if (tbl[x][y] not in ('0', 'C')):
			return (x, y)
	
	#Diagonal esquerdo-baixo
	x = pos[0]+1; y = pos[1]-2
	if (x >= 0 and x < 8 and y >= 0 and y < 8):
		if (tbl[x][y] not in ('0', 'C')):
			return (x, y)
	
	#Cima direito
	x = pos[0]-2; y = pos[1]+1
	if (x >= 0 and x < 8 and y >= 0 and y < 8):
		if (tbl[x][y] not in ('0', 'C')):
			return (x, y)
	
	#Cima esquerdo
	x = pos[0]-2; y = pos[1]-1
	if (x >= 0 and x < 8 and y >= 0 and y < 8):
		if (tbl[x][y] not in ('0', 'C')):
			return (x, y)
	
	#Baixo esquerdo
	x = pos[0]+2; y = pos[1]-1
	if (x >= 0 and x < 8 and y >= 0 and y < 8):
		if (tbl[x][y] not in ('0', 'C')):
			return (x, y)
	
	#Baixo direito
	x = pos[0]+2; y = pos[1]+1
	if (x >= 0 and x < 8 and y >= 0 and y < 8):
		if (tbl[x][y] not in ('0', 'C')):
			return (x, y)
	
	return None

#Verifica se bispo (B) consegue comer alguma peça
def b_check(pos):
	for i in range(8):

		#Diagonal esquerdo-baixo
		x = pos[0]+i; y = pos[1]-i
		if (x >= 0 and x < 8 and y >= 0 and y < 8):
			if (tbl[x][y] not in ('0', 'B')):
				return (x, y)

		#Diagonal direito-baixo
		x = pos[0]+i; y = pos[1]+i
		if (x >= 0 and x < 8 and y >= 0 and y < 8):
			if (tbl[x][y] not in ('0', 'B')):
				return (x, y)
		
		#Diagonal direito-cima
		x = pos[0]-i; y = pos[1]+i
		if (x >= 0 and x < 8 and y >= 0 and y < 8):
			if (tbl[x][y] not in ('0', 'B')):
				return (x, y)
		
		#Diagonal esquerdo-cima
		x = pos[0]-i; y = pos[1]-i
		if (x >= 0 and x < 8 and y >= 0 and y < 8):
			if (tbl[x][y] not in ('0', 'B')):
				return (x, y)
	
	return None

#Verifica se rainha (Q) consegue comer alguma peça
def q_check(pos):
	for i in range(8):

		#Vertical
		if (tbl[i][pos[1]] not in ('0', 'Q')):
			return (i, pos[1])
		
		#Horizontal
		if (tbl[pos[0]][i] not in ('0', 'Q')):
			return (pos[0], i)


	for i in range(8):

		#Diagonal direito-baixo
		x = pos[0]+i; y = pos[1]+i
		if (x >= 0 and x < 8 and y >= 0 and y < 8):
			if (tbl[x][y] not in ('0', 'Q')):
				return (x, y)
		
		#Diagonal direito-cima
		x = pos[0]-i; y = pos[1]+i
		if (x >= 0 and x < 8 and y >= 0 and y < 8):
			if (tbl[x][y] not in ('0', 'Q')):
				return (x, y)
		
		#Diagonal esquerdo-cima
		x = pos[0]-i; y = pos[1]-i
		if (x >= 0 and x < 8 and y >= 0 and y < 8):
			if (tbl[x][y] not in ('0', 'Q')):
				return (x, y)
		
		#Diagonal esquerdo-baixo
		x = pos[0]+i; y = pos[1]-i
		if (x >= 0 and x < 8 and y >= 0 and y < 8):
			if (tbl[x][y] not in ('0', 'Q')):
				return (x, y)
	
	return None

#Verifica se rei (K) consegue comer alguma peça
def k_check(pos):
	
	#Vertical cima
	x = pos[0]+1; y = pos[1]
	if (x >= 0 and x < 8 and y >= 0 and y < 8):
		if (tbl[x][y] not in ('0', 'K')):
			return (x, y)
	
	#Vertical baixo
	x = pos[0]-1; y = pos[1]
	if (x >= 0 and x < 8 and y >= 0 and y < 8):
		if (tbl[x][y] not in ('0', 'K')):
			return (x, y)
	
	#Horizontal direito
	x = pos[0]; y = pos[1]+1
	if (x >= 0 and x < 8 and y >= 0 and y < 8):
		if (tbl[x][y] not in ('0', 'K')):
			return (x, y)

	#Horizontal esquerdo
	x = pos[0]; y = pos[1]-1
	if (x >= 0 and x < 8 and y >= 0 and y < 8):
		if (tbl[x][y] not in ('0', 'K')):
			return (x, y)


	#Diagonal direito-baixo
	x = pos[0]+1; y = pos[1]+1
	if (x >= 0 and x < 8 and y >= 0 and y < 8):
		if (tbl[x][y] not in ('0', 'Q')):
			return (x, y)
	
	#Diagonal direito-cima
	x = pos[0]-1; y = pos[1]+1
	if (x >= 0 and x < 8 and y >= 0 and y < 8):
		if (tbl[x][y] not in ('0', 'Q')):
			return (x, y)
	
	#Diagonal esquerdo-cima
	x = pos[0]-1; y = pos[1]-1
	if (x >= 0 and x < 8 and y >= 0 and y < 8):
		if (tbl[x][y] not in ('0', 'Q')):
			return (x, y)
	
	#Diagonal esquerdo-baixo
	x = pos[0]+1; y = pos[1]-1
	if (x >= 0 and x < 8 and y >= 0 and y < 8):
		if (tbl[x][y] not in ('0', 'Q')):
			return (x, y)
	
	return None



org = tbl_org3
tbl = copy.deepcopy(org)
print("Torre")
m = 0
while (m != None):
	p = search("T")
	m = t_check(p)
	print(p, m)
	come(p, m)

tbl = copy.deepcopy(org)
print("Cavalo")
m = 0
while (m != None):
	p = search("C")
	m = c_check(p)
	print(p, m)
	come(p, m)

tbl = copy.deepcopy(org)
print("Bispo")
m = 0
while (m != None):
	p = search("B")
	m = b_check(p)
	print(p, m)
	come(p, m)

tbl = copy.deepcopy(org)
print("Rainha")
m = 0
while (m != None):
	p = search("Q")
	m = q_check(p)
	print(p, m)
	come(p, m)

tbl = copy.deepcopy(org)
print("Rei")
m = 0
while (m != None):
	p = search("K")
	m = k_check(p)
	print(p, m)
	come(p, m)
