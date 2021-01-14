l = [1, 2, 3, 4, 8, 7]

par = 0
impar = 0

for i in range(len(l)):
    if (l[i] & 1):
        impar += 1
    else:
        par += 1

if (par == impar):
    print("S")
else:
    print("N")
