
#Aula  16 - Soma de elementos

'''
#Entrada de dados
N = int(input())
V = input().split()

for i in range (len(V)):
    print(i)
    V[i] = int(V[i])

print(V)

#Processamento

total = 0 #armazena a soma dos valores de V
for elemento in V:
    total = total+elemento

#Saída
    print(total)
'''