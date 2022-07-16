def remdup(l):
    p=[]
    for i in l:
        if i not in p:
            p.append(i)
    return p

#########################################################################

def sumsquare(l):
    eve=0
    odd=0
    for i in l:
        if i%2==0:
            eve+=i*i
        else:
            odd+=i*i
    robin=list()
    robin.append(odd)
    robin.append(eve)
    return robin

#########################################################################

def transpose(m):
    luffy=list()
    for i in range(len(m[0])):
        nami=[]
        for j in range(len(m)):
            nami.append(m[j][i])
        luffy.append(nami)
    return luffy

########################################################################
triples = [ (x,y,z) for x in range(2,4) for y in range(2,5) for z in range(5,7) if 2*x*y > 3*z ]
print(triples)