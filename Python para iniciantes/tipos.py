#São como listas, mas não é possivel adicionar ou remover valores

tuplas=("Leticia","Python","Udemy")
print("Tuplas")
print(tuplas)

print("Primeiro valor da tupla")
print(tuplas[0])
print("Segundo valor da tupla")
print(tuplas[1])
print("Terceiro valor da tupla")
print(tuplas[2])
print("Primeiro valor da tupla")
print(tuplas[0:1])
print("Primeiro e segundo valores da tupla")
print(tuplas[0:2])
print("Comprimento da tupla")
print(len(tuplas))
print("Duas vezes a tupla")
print(tuplas*2)
print("Leticia esta em tuplas: ")
print("Leticia" in tuplas)

lista=[1,4,'Leticia']
#converte o valor da tupla para o valor de uma lista
print("Lista")
print(lista)
tuplas2=tuple(lista)
print("Tupla 2 - convertida para os valores da lista")
print(tuplas2)
