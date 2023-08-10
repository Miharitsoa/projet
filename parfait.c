#include<stdio.h>
#include<math.h>
void numtest(float n);
void table(int n);
void nbparfait(int n);
int main(){
	int choix,d;
	float n;

	while(n!=d){
		printf("Veuillez entrer un nombre n=");
		scanf("%f", &n);
		numtest(n);

		printf("Bienvenu dans ce programme\n");
		printf("<<<menu>>>\n1-Table de multiplication\n2-Nombre  parfait\n3-Quitter\n");
		printf("Entrez votre choix\n");
		scanf("%d", &choix);

		if(choix==1){
			printf("La table de multiplication par %f est:\n", n);
			table(n);
		}
		else if(choix==2){
			nbparfait(n);
		}
		else{
			main;
		}
	}



	return 0;
}
void numtest(float n){
	int d;
	d=(int)n;
	if(d==n){
		printf("Le nombre %f est entier\n", n);
	}
}

void table(int n){
	int i, produit;
	for(i=0;i<=10;i++){
		produit=n*i;
		printf("%d*%d=%d\n", n, i, produit);
	}
}
void nbparfait(int n){
	int i, somme;
	for(i=1;i<n;i++){
		if(n%i==0){
			somme+=i;
		}
	}
	if(somme==n){
		printf("Ce nombre est parfait\n");
	}
	else{
		printf("nombre banal\n");
	}
}
