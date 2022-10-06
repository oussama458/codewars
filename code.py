import string
def decode(message):
    k = 0
    newlist = []
    alphabet = list(string.ascii_lowercase)
    n = len(alphabet)
    for x in message :
        if (x != " "):
            k = alphabet.index(x) +1
            newlist.append(alphabet[n-k])
        else :
            newlist.append(" ")
    return "".join(newlist)



