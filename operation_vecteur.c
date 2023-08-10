#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"vect.h"

void remplir_tab(int*tab,int n);

int main(){
	int*u=NULL;
	int*v=NULL;
	int*w=NULL;
	int n=0;
	n=dimension();
	u=alloue_tab(n);
	v=alloue_tab(n);
	w=somme_vecteur(u,v,n);
	for(int i=0;i<n-1;i++){
		printf("%d\n",w[i]);
	}



	return 0;
}
void remplir_tab(int*tab,int n){
	printf("Entrez les coordonnees du vecteur:\n");
	for(int i=0;i<n-1;i++){
		scanf("%d",&tab[i]);
		printf("\n");
	}
}

