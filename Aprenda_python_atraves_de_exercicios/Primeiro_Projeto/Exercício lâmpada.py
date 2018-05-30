#Aula 18 - Lâmpadas - https://neps.academy/problem/52
'''
#Entrada
N = int(input()) #Quantidade de ações
L = input().split()

#Processamento
A = 0
B = 0

for acao in L: #Muda o estado da lampada
    if(acao == '1'):
        if A == 1 :
            A=0
        else
            A=1
    elif (acao == '2'):
        if B == 1:
            B = 0
        else
            B = 1
#Saída
print(A)
print(B)
'''
