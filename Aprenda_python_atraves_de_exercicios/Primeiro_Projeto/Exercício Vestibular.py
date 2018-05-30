#Aula 20 - Vestibular - https://neps.academy/problem/160
'''
#Entrada
N = int(input())
oficial = input()
candidato= input()

total = 0 #Questões acertadas]

#Processamento
for o,c in zip(oficial,candidato):
    if o == c:
        total += 1
#Saída
print(total)
'''