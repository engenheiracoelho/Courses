#Aula 11 - Zerinho ou um - https://neps.academy/problem/88
'''
#Entrada
A,B,C = input().split()

#Processamento
ganhador = None
if A != B and A != C:
    ganhador = 'A'
elif B != A and B != C:
    ganhador = 'B'
elif C != A and C != B:
    ganhador = 'C'
else:
    ganhador = '*'
#Saída
print(ganhador)
'''
