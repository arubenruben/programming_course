# Este programa vai executar as operações elementares numéricas

import isNumeric

texto=4

numberOne = input("Inserir o primeiro numero\n")
numberTwo = input("Inserir o segundo numero.\n")


if isNumeric.isNumeric(numberOne) and isNumeric.isNumeric(numberTwo):
    print("Soma:", int(numberOne)+int(numberTwo), "\n")
    print("SubTracao:", int(numberOne)-int(numberTwo), "\n")
    print("Multiplicacao:", int(numberOne)*int(numberTwo), "\n")
    print("Divisao:", int(numberOne)/int(numberTwo), "\n")
    print("Resto:", int(numberOne) % int(numberTwo), "\n")

if not(isNumeric.isNumeric(numberOne) and isNumeric.isNumeric(numberTwo)):