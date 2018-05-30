#Aula 10 - Aprovado ou reprovado - https://neps.academy/problem/86
'''
#Entrada de dados
A, B = input().split()
A = float(A)
B = float(B)

#Processamento
media = (A + B)/ 2
resposta = ''
if media >=7:
    resposta = 'Aprovado'
elif media < 7 and media >= 4:
    resposta = 'Recuperacao'
else:
    resposta = 'Reprovado'

#Saída do programa
print(resposta)
'''
