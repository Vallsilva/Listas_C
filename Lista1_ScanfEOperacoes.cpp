//Biblioteca de entrada e saida
#include <stdio.h>
//Biblioteca de operações matematicas
#include<math.h>

int main(){
	
	float a, b, c;
	scanf("%f,%f,%f", &a, &b, &c);
	float x, y, z;
	x = 3;
	y = 4;
	z = 5;
	//Media
	printf("%f\n", (a+b+c)/x);
	//Media ponderada
	printf("%f\n", ((a*x)+(b*y)+(c*z)/(x+y+z)));
	//Perimetro
	x = 3.14;
	printf("%f\n", 2*x*a);
	//Area do circulo
	printf("%f\n", x*pow(a,2));
	//Area do triangulo
	printf("%f\n",(b*c)/2);
	//Hipotenusa
	printf("%f\n", sqrt((pow(b,2)+pow(c,2))));
	//Raizes
	//x1
	
	return 0;
}
