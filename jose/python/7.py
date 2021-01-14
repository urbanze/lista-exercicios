n = 5
m = 130000


def rev(x):
    aux = str(x)
    tmp = ""

    for i in range(len(aux)-1, -1, -1):
        tmp += aux[i]
    
    return int(tmp)


x = rev(rev(n) + rev(m))
print(x)


