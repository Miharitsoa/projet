#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,delta,x,x1,x2;
	printf("Etude de l'équation ax*x+bx+c=0\n");
	printf("Entrez a,b et c\n");
	scanf("%f" "%f" "%f",&a ,&b ,&c);
	
	printf("Calcul de delta\n");
	delta=b*b-4*a*c;
	printf("La valeur de delta est %f\n",delta);
	
	if(delta>0){
		x1=(-b-sqrt(delta))/(2*a);
		x2=(-b+sqrt(delta))/(2*a);
		printf("L'equation admet deux solutions x1=%f et x2=%f\n",x1,x2);
	}
	
	else if(delta==0){
		x=(-b)/(2*a);
		printf("L'equation a une unique solution x=%f\n",x);
	}
	
	else{
		printf("L'equation n'a pas de solution reelle\n");	
	}


	return 0;
}

