# C++ Problem Solving - README

## Description

This C++ program consists of several functions that solve different mathematical problems. The functions are accessible through a menu-driven interface, where the user can choose which problem to solve. Each function is designed to perform a specific task as described below:

1. **operaNumeros**: This function takes two numbers as input from the user and allows the user to choose from three operations: addition, subtraction, and multiplication of the two numbers.

2. **numeroImpar**: In this function, the user is prompted to enter a number, and the function validates whether the number is odd. If the number is not odd, the user will be prompted to re-enter a valid odd number.

3. **sumaPares**: The function calculates the sum of all even numbers between 0 and 100.

4. **mediaAritmetica**: The function asks the user how many numbers they want to enter, and then reads the specified number of values from the user. It then calculates and displays the arithmetic mean of the entered values.

5. **numeroMagico**: This function generates a random positive integer between 1 and 100. The user is asked to input a number within the same range, and the function provides hints (MÁS or MENOS) to help the user guess the randomly generated number. The function also keeps track of the number of attempts it takes the user to guess correctly.

6. **conversionCelsiusFarenheit**: The user is asked to input an initial temperature in Celsius and the number of conversions to be performed. The function then converts these temperatures to Fahrenheit using the conversion formula and displays the results in a tabular format.

7. **serieAritmetica**: This function calculates and displays the terms and the total sum of an arithmetic series. The series is defined by a first term, a common difference, and the number of terms to sum. For this implementation, a = 1, d = 3, and n = 25.

8. **mediasGeometricaArmonica**: The function calculates and displays the geometric and harmonic means of a set of numbers entered by the user. The input process continues until the user enters 0, which will terminate the data input and trigger the calculations.

## Instructions

To use this program, compile and run the provided C++ file `Actividad_2.cpp`. The program will display a menu with the available options. Choose a problem to solve by entering the corresponding number. Follow the instructions given by each function to provide the necessary inputs.

## Cases of Test

Please find below two test cases for each problem:

### Case 1:

```
Ejercicio seleccionado: 1

Número 1: 10
Número 2: 5

Digite:
S) para sumar los números
R) para restar los números
M) para multiplicar los números
Letra de la operación: S

Suma de 10 y 5 = 15
```

### Case 2:

```
Ejercicio seleccionado: 2

Digite un número impar: 7
```

### Case 3:

```
Ejercicio seleccionado: 3

Suma de números pares entre 0 y 100: 2550
```

### Case 4:

```
Ejercicio seleccionado: 4

Cantidad de números: 4
1. Digite un número: 10
2. Digite un número: 20
3. Digite un número: 30
4. Digite un número: 40

Media Aritmética: 25
```

### Case 5:

```
Ejercicio seleccionado: 5

Adivine el número mágico entre 1 y 100: 50
MENOS
Adivine el número mágico entre 1 y 100: 25
MÁS
Adivine el número mágico entre 1 y 100: 37
MÁS
Adivine el número mágico entre 1 y 100: 44
MÁS
Adivine el número mágico entre 1 y 100: 47
MENOS
Adivine el número mágico entre 1 y 100: 46

Acertaste con el número mágico 46 después de 6 intentos.
```

### Case 6:

```
Ejercicio seleccionado: 6

Cantidad de conversiones por realizar: 5
Valor inicial en Celsius: 10
Incremento para los valores Celsius: 5

FARENHEIT     CELSIUS
50            10
59            15
68            20
77            25
86            30
```

### Case 7:

```
Ejercicio seleccionado: 7

Término 1: 1
Término 2: 4
Término 3: 7
Término 4: 10
Término 5: 13
Término 6: 16
Término 7: 19
Término 8: 22
Término 9: 25
Término 10: 28
Término 11: 31
Término 12: 34
Término 13: 37
Término 14: 40
Término 15: 43
Término 16: 46
Término 17: 49
Término 18: 52
Término 19: 55
Término 20: 58
Término 21: 61
Término 22: 64
Término 23: 67
Término 24: 70
Término 25: 73

Valor total de la serie: 625
```

### Case 8:

```
Ejercicio seleccionado: 8

Digite un número: 2
Digite un número: 5
Digite un número: 0

Media Geométrica: 3.16228
Media Armónica: 3.33333
```

Feel free to explore more cases and functionalities of the program. Enjoy!
