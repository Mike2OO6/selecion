import random

lista = list(range(1, 31))
random.shuffle(lista)
print("Lista original:", lista)

for i in range(len(lista)):
    min_index = i
    for j in range(i+1, len(lista)):
        if lista[j] < lista[min_index]:
            min_index = j
    lista[i], lista[min_index] = lista[min_index], lista[i]

print("Lista ordenada:", lista)
