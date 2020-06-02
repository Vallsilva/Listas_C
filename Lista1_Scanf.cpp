//Biblioteca de entrada e saida
#include <stdio.h>
//Biblioteca de operações matematicas
#include<math.h>

int main(){
	
	float a, b, c, d;
	scanf("%f,%f,%f,%f", &a, &b, &c, &d);
	//Letra a
	printf("%f\n", a+b);
	//Letra b
	printf("%f\n", a/c);
	//Letra c
	printf("%f\n", pow(a,2));
	//Letra d
	printf("%f\n", b*c);
	//Letra e
	printf("%f\n", a*b-c);
	//Letra f
	printf("%f\n", a+b*c);
	//Letra g
	printf("%f\n", (a+b)*c);
	//Letra h
	printf("%f\n", sin(a));
	//Letra i
	printf("%f\n", sqrt(a));
	//Letra j
	printf("%f\n", a+b+c);
	//Letra k
	printf("%f\n", a*b*c);
	//Letra l
	printf("%f\n", (a+b+c)/d);
	//Letra m
	printf("%f\n", ((a+b)*(a-d)));
	//Letra n
	printf("%f\n", (b/c)+(a*d));
	//Letra o
	printf("%f\n", sin(b)+cos(c));
	//Letra p
	printf("%f\n", log(a)-log(c));
	//Letra q
	printf("%f\n", log(a)+(log(b)*log(d)-cos(log(c))));
	//Letra r
	printf("%f\n", (a+b)/c-(d+a));
	//Letra s
	printf("%f\n", (cos(d)+sin(c))*(cos(b)-sin(a)));
	return 0;
}
