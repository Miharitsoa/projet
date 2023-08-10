#include<stdio.h>
#include<math.h>
void getData(float*a, float*b, float*c);
float resolve1(float a, float b, float c, float*x1, float*x2);
void resolve(float a, float b, float c, float *delta, float*x1, float*x2);
float calcDelta(float a, float b, float c);
void displayResult(float a, float b, float c, float delta, float x1, float x2);
int main(){
	printf("Resolution a*x*x+b*x=c=0 dans R\n");
///§ Données
	float a=1, b=2, c=-1;      //les coeff de l'équation
	float x1=876, x2=987.6;   //les solutions éventuelles
	float delta;            //le discriminant

	getData(&a, &b, &c);         //pour récuperer des valeurs de a, b et c

/// Calcul
//	resolve(a, b, c, &delta, &x1, &x2);
	delta=resolve1(a, b, c, &x1, &x2);     //pour résoudre l'équation
/*	delta=calcDelta(a, b, c);
	if(delta>=0){
		x1=(-b-sqrt(delta))/(2*a);
		x2=(-b+sqrt(delta))/(2*a);
	}
	
*/
/// Sortie
	displayResult(a, b, c, delta, x1, x2);   //pour afficher les résultats
	return 0;
}

void getData(float*a, float*b, float*c){
	printf("Entrez a:"); scanf("%f", a);
	printf("Entrez b:"); scanf("%f", b);
	printf("Entrez c:"); scanf("%f", c);
}

float resolve1(float a, float b, float c, float*x1, float*x2){
	float delta1=897655.;
	delta1=calcDelta(a, b, c);
	if(delta1>=0){
		*x1=(-b-sqrt(delta1))/(2*a);
		*x2=(-b+sqrt(delta1))/(2*a);
	}

	return delta1;
}

void resolve(float a, float b, float c, float *delta, float*x1, float*x2){
	*delta=calcDelta(a, b, c);
	if(*delta>=0){
		*x1=(-b-sqrt(*delta))/(2*a);
		*x2=(-b+sqrt(*delta))/(2*a);
	}
}
float calcDelta(float a, float b, float c){
	float delta=0;
	delta=b*b-4*a*c;
	return delta;
}
	

void displayResult(float a, float b, float c, float delta, float x1, float x2){
	printf("Avec les coefficients a=%f\nb=%f\nc=%f\n", a, b, c);
	if(delta<0){
		printf("Pas de solution\n");
	}
	
	printf("Les solutions sont x1=%f\nx2=%f\n", x1, x2); 
	
}


