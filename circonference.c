#include<stdio.h>
#define PI 3.1416
int main(){
	printf("Calcul de la circonference d'un cercle\n");
	float 	rayon=1,             // Le rayon du cercle
			circonf=0;           // La circonference du cercle
	// Entrée de données
	printf("Entrez le rayon du cercle\n");
	scanf("%f",&rayon);
	
	// Traitement
	circonf = 2*PI*(rayon);
	
	// Sortie de données
	printf("Le rayon est %f \n La circonference est %f", rayon, circonf);
	
	return 0;
} 
