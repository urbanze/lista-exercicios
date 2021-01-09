n = int(input("Digite o numero: "), 16)

txt = str(n)
txt_inv = ""

for i in range(len(txt)-1, -1, -1):
    txt_inv += txt[i]

print(txt, txt_inv)

if (txt == txt_inv):
    print("S")
else:
    print("N")
