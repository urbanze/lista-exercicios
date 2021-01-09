n = int(input("Digite N: "))
x = []

for i in range(n):
    a = int(input("Digite o numero %d: " % (i+1)))
    x.append(a)

    
tt = 0
tt_i = 0
tt_p = 0

for i in range(n):
    tt += x[i]
    if (x[i] % 2 == 0):
        tt_p += x[i]
    else:
        tt_i += x[i]

print("%d %x %o" % (tt, tt_p, tt_i))
