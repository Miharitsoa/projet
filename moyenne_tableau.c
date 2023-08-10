#include<stdio.h>
void entrertab(int*tab){
	for(int i=0;i<5;i++){
		printf("Entrez la valeur numero %d du tableau:", i+1);
		scanf("%d", tab+i);
	}
}
float moyennegenerale(int*tab,int somme,float moyenne){
	for(int i=0;i<5;i++){
		somme+=*(tab+i);
	}
	moyenne=(float)somme/5;
	printf("La moyenne est %f", moyenne);
	return moyenne;
}
int main(){
	int tab[5]={};
	int somme=0;
	float moyenne=0;
	entrertab(tab);
	moyenne=moyennegenerale(tab, somme, moyenne);

	return 0;
}
