# PERCENT
A Percentage Calculator, embeddable in scripts and applications

# Overview:

[EN]: This percentage calculator is meant to be moved into /usr/bin or /usr/local/bin
it calculates the percentage between two numbers, for instance, ./percent 10 100 returns 10 is 10% of 100
It also allows you to calculate percent of storage by adding a size letter: K, M, G, T (for Kilobyte, Megabyte, Gigabyte and Terabyte)
for example: ./percent 1m 10g returns how much is 1mb out of 10gb. 

This might be useful when you are handling data via bash scripting and need to calculate a percentage on the fly.

[ES]: Esta calculadora de porcentajes funciona idealmente dentro de /usr/bin o /usr/local/bin
Calcula el porcentaje entre dos cifras. Por ejemplo ./percent 10 100.

También sirve para calcular tamaño de almacenamiento, si al número a porcentualizar se le agrega una letra indicandolo. Por ej: ./percent 10M 10G 
Calcula cual es el porcentaje de 10M sobre 10G.

El propósito es simplificar tareas que requieran generar un porcentaje rápidamente, al manipular datos vía bash scripting u otra aplicación.


# Installation:

move percent to /usr/bin
e.g: sudo mv percent /usr/bin

If you are compiling from source, run compile.sh 

# About:
Author: **Alexia Rivera**
E-mail: lachicadesistemas@gmail.com

# TO DO:

- [x] Calculate Percentages of ordinary numbers and storage sizes
- [ ] Add translation config
- [ ] built-in aliases.


# KNOWN BUGS:

Compiles with a few warnings. This has been addressed **(02/01/2023)** And will be fixed soon.


