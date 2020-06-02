#include<stdio.h>
#include<math.h>
int main(){
	//Algoritimo para retornar o sucessor
	int numero;
	scanf("%d", &numero);
	while(numero!=NULL){
		numero = numero +1;
		printf("%d\n", numero);
		scanf("%d", &numero);
	}
	//Algoritimo para calcular media
	int a, b, c, d;
	scanf("%d,%d,%d,%d", &a, &b, &c, &d);//1,2,3,4
	while(a!=NULL && b!=NULL && c!=NULL && d!=NULL){
		int media;
		media = (a+b+c+d)/4;
		printf("A media eh: %d\n", media);
		scanf("%d%d%d%d", &a, &b, &c, &d);
	}
	//Algoritimo para calcular media ponderada
	int a, b, c;
	printf("Informe 3 notas: \n");
	scanf("%d,%d,%d", &a, &b, &c);
	while(a!=NULL && b!=NULL && c!=NULL){
		int x, y, z;
		printf("Informe 3 pesos para as notas anteriores: \n");
		scanf("%d,%d,%d", &x, &y, &z);
		printf("A Media ponderada eh: %d,%d\n", (a+b+c)/(x+y+z));
	}
	//Algoritimo para converter temperatura
	float c;
	printf("Informe a temperatura em graus celsius\n");
	scanf("%f", &c);
	float f;
	f=((c*9)/5)+32;
	printf("A temperatura em fahrenheit eh:%f\n", f);
	
return 0;	
}
