//Biblioteca de entrada e saida
#include <stdio.h>
//Biblioteca de operações matematicas
#include<math.h>

int main(){
	int a = 3;
	int b = 4;
	//a
	printf("%d\n", a+b);
	a = 7;
	b = 4;
	//b
	printf("%d\n", a/b);
	a = 3;
	b = 2;
	//c
	printf("%d\n", a^b);
	a = 5.3;
	b = 2.1;
	//d
	printf("%d\n", a*b);
	a = 2;
	b = 5;
	//e
	printf("%d\n", a*b-a);
	//f
	printf("%d\n", a+a*b);
	int c = 3;
	//g
	printf("%d\n", (a+b)*c);
	//h
	printf("%d\n", sin(3.141502));
	//i
	printf("%d\n", sqrt(b));
	b = 1;
	//j
	printf("%d\n", b+a+c);
	//k
	printf("%d\n", b*a*c);
	float d = 3.0;
	//l
	printf("%d%f\n", (b+a+c)/d);
	d = 4;
	//m
	printf("%d\n", (a+d)*(c-b));
	b = 9;
	//n
	printf("%d\n", (b/c)+(c*a));
	float w, x, y, z; 
	w = 4.5;
	x = 3.7;
	//o
	printf("%f\n", sin(w)+cos(x));
	w = 2.3;
	x = 3.1;
	//p
	printf("%f\n", log(w)-log(x));
	y = 7;
	//q
	printf("%d\n", log(y)+(log(y)*log(y)-cos(y)));
	w = 10.3;
	x = 8.4;
	y = 50.3;
	//r
	printf("%f\n", (w+x)/y-(w+x));
	w = 0.8
	//s
	printf("%d\n", (cos(w)+sin(w))*(cos(w)-sin(w)));
	
return 0;

}
