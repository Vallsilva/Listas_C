#include<stdio.h>
#include<math.h>
//letra a
float media (float a, float b, float c){
		return (a+b+c)/3;
}
//Letra b
float media_Ponderada(float a, float b, float c){
	float media = ((a*3)+(b*4)+(c*5)/(3+4+5));
	return media;
}
//Letra c
float perimetro (float r){
	float perim = 2*M_PI*r;
	return perim;
}
//Letra d 
float area_Circulo (float r){
	float area = M_PI*pow(r,2);
	return area;
}
//Letra e
float area_Triangulo(float base, float altura){
	float triangulo = (base*altura)/2;
	return triangulo;
}
//Letra f
float area_Caixa(float h, float base, float comprimento){
	float caixa = (2*(base*h)+2*(comprimento*h)+2*(base*comprimento));
	return caixa;
}
//Letra g
float volume_Caixa(float h, float base, float comprimento){
	float volume = h*b*c;
	return volume;
}
//Letra h
float area_Cilindro(float perimetro, float r, float h){
	float cilindro = perimetro*(r+h);
	return cilindro;
}
//Letra i
float volume_Cilindro(float r, float h){
	float volCilindro = M_PI*pow(r,2)*h;
	return volCilindro;
}
//Letra j
float hipotenusa(float b, float c){
	float hipot = sqrt(pow(b,2)+pow(c,2));
	return hipot;
}

int main (){
	
	float a, b, c;
	scanf("%f,%f,%f", &a, &b, &c);
	//chamada letra a
	printf("%f\n", media(a,b,c));
	//chamada letra b
	printf("%f\n", media_Ponderada(a,b,c));
	//Chamada letra c
	printf("%f\n", perimetro(a));
	//Chamada letra d
	printf("%f\n", area_Circulo(a));
	//Chamada letra e
	printf("%f\n", area_Triangulo(b,c));
	//Chamada letra f
	printf("%f\n", area_Caixa(a, b, c));
	//Chamada letra g
	printf("%f\n", volume_Caixa(a, b, c));
	//Chamada letra h
	printf("%f\n", area_Cilindro(perimetro(a), a, b));
	//Chamada letra i
	printf("%f\n", volume_Cilindro(a, b));
	//Chamada letra j
	printf("%f\n", hipotenusa(b, c));	
	return 0;
}
