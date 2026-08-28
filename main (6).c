/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main() {
float num1,num2,soma;
printf("Digite o primeiro número que deseja somar: ");
scanf("%f", &num1);
printf("Digire o segundo número que deseja somar: ");
scanf("%f", &num2);
soma = (num1+num2);
printf("A soma dos números %.2f com %.2f resulta em %.2f", num1, num2, soma);
return 0;
}
