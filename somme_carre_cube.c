#include<stdio.h>
void Calculcode(int n, int*pscarre, int*pscube){
	int i;
	*pscarre=0;
	*pscube=0;
	for(i=1;i<=n;i++){
		*pscarre+=(i*i);
		*pscube+=(i*i*i);
	}
}

void affichagesomme(int n, int scarre, int scube){
	printf("La somme des carres de %d premiers entiers non nuls est %d\n", n, scarre);
	printf("La somme des cubes des %d premiers entiers non nuls est %d\n", n, scube);
}

int main(){
	//Données
	
	int n=2;							//Limite de la somme à calculer
	int scarre=3;						//Initialisation de la somme des carrés 
	int scube=34;					    //Initialisation de la somme des cubes
	
	printf("Entrez une valeur de n\n");
	scanf("%d", &n);
	
	//Traitement
	Calculcode(n, &scarre, &scube);

	//Resultats
	affichagesomme(n, scarre, scube);


	return 0;
}
