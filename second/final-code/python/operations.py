# Este programa vai executar as operações elementares numéricas e booleanas

import isNumeric

numberOne = input("Inserir o primeiro numero\n")
numberTwo = input("Inserir o segundo numero. Para nada escrever     no    \n")


print(numberOne, numberTwo)

if isNumeric.isNumeric(numberTwo):
    print("Soma:", int(numberOne)+int(numberTwo), "\n")
    print("SubTracao:", int(numberOne)-int(numberTwo), "\n")
    print("Multiplicacao:", int(numberOne)*int(numberTwo), "\n")
    print("Divisao:", int(numberOne)/int(numberTwo), "\n")
    print("Resto:", int(numberOne) % int(numberTwo), "\n")

