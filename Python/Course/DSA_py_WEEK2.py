def threesquares(m):
    if(m-7) % 8 == 0 or (m-28) % 8 == 0:
        return False
    else:
        return True

def repfree(s):
    a = []
    for i in s:
        if i not in a:
            a.append(i)
    if len(a) == len(s):
        return True
    else:
        return False


def hillvalley(l):
    dec = False
    inc = False
    c = 0
    for i in range(len(l)-1):
        if c > 1:
            return False
        right = l[i+1]
        middle = l[i]
        diff = right - middle
        if diff > 0:
            if dec:
                c += 1
            inc = True
            dec = False
        elif diff < 0:
            if inc:
                c += 1
            dec = True
            inc = False
    if c == 1:
        return True
    return False
