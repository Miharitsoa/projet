#include<stdio.h>
#include<math.h>
int main(){
	printf("Resolution de ax*x+bx+c=0 dans R\n");
	// Entrée des données
	float a=2, b=1, c=3;
	float x1=4.3 , x2=78.15;
	float delta=4;
	
	// Traitement
	delta= b*b - 4*a*c;
	printf("Delta=%f\n", delta);
	
	if(delta >=0){
		x1=(-b-sqrt(delta))/(2*a);
		x2=(-b+sqrt(delta))/(2*a);
	}
	else{
		printf("Il n'y a pas de solution\n");
	}
	
	// Sortie de résultat
	if(delta>=0){
		printf("Les solutions sont\n");;
		printf("x1=%f\n x2=%f\n", x1, x2);
	}
	return 0;
}
