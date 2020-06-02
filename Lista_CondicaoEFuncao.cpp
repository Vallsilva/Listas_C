#include<stdio.h>
#include<math.h>

//1.a.
float max(float a, float b, float c){
	if(a>b && a>c){
		return a;
	}
	if (b>c){
		return b;
	}
	else{
		return c;
	}
}
//1.b
float min(float max, float a, float b, float c){
	if(max==a){
		if(b<c){
			return b;
		}	
	}
	if (max==b){
		if(a<c){
			return a;
		}
	}
	if(max==c){
		if(a<b){
			return a;
		}
	}
}
//2.a.
int par (int x){
	
	if(x%2==0){
	
		return 0;
		}
		else{
			return 1;
	}
}
//2.b
int dentro(int x, int y, int z){
	if(x>y && x<z){
		return 1;
	}
	else{
		return 0;
	}
}
//2.c
int fora(int x, int y, int z){
	int teste = dentro(x, y,z);
	if (teste==0){
		return 1;
	}
}
//3
int bissexto(int ano){
	if(ano%4==0){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	float a, b, c;
	int x, y, z;
	scanf("%f,%f,%f,%d,%d,%d", &a, &b, &c, &x, &y, &z);
	//chamada 1.a
	printf("%f\n", max(a, b, c));
	//chamada 1.b
	printf("%f\n", min(max(a,b,c),a, b, c));
	//chamada 2.a
	printf("%d\n", par(x));
	//Chamada 2.b
	printf("%d\n", dentro(x,y,z));
	//Chamada 2.c
	printf("%d\n", fora(x,y,z));
	int ano;
	printf("Digite um ano: ");
	scanf("%d", &ano);
	//Chamada 3
	printf("%d\n", bissexto(ano));
	return 0;
	
}
