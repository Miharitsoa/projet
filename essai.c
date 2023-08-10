#include<stdio.h>
#include<stdlib.h>

/*int entrernombre();
int* allouer(int taille);
void entrerValtab(int* tab,int taille);
void affichertab(int* tab,int taille);*/
int entrernombre1(); 
int entrernombre2();
int** allouer2D(int ligne,int col);
void entrervaltab2D(int**tab,int ligne,int col);
void affichertab2D(int**tab,int ligne,int col); 
int main(){
//	int taille=0;
	int ligne=0,col=0;
	int **tab=NULL;
/*	taille=entrernombre();
	tab=allouer(taille);
	entrerValtab(tab, taille);
	affichertab(tab, taille);  */

	ligne=entrernombre1();
	col=entrernombre2();
	tab=allouer2D(ligne,col);
	entrervaltab2D(tab,ligne,col);
	affichertab2D(tab,ligne,col);   
	return 0;
}
int entrernombre1(){
	int m=0;
	printf("Le nombre de lignes:");
	scanf("%d", &m);
	return m;
}
int entrernombre2(){
	int n=0;
	printf("Le nombre de colonnes:");
	scanf("%d", &n);
	return n;
} 
int** allouer2D(int ligne,int col){
	int **tab=NULL;
	tab=(int**)malloc(ligne*sizeof(int*));
	if(tab==NULL){
		exit(0);
	}
	for(int i=0;i<col;i++){
		tab[i]=(int*)malloc(col*sizeof(int));
		if(tab[i]==NULL){
			exit(0);
		}
	}
	
	return tab;
}
void entrervaltab2D(int**tab,int ligne,int col){
	for(int i=0;i<ligne;i++){
		for(int j=0;j<col;j++){
			printf("Entrez tab[%d][%d]:", i, j);
			scanf("%d", &(tab[i][j]));
		}
	}
}
void affichertab2D(int**tab,int ligne,int col){
	for(int i=0;i<ligne;i++){
		printf("\n");
		for(int j=0;j<col;j++){
				printf("[%d]", tab[i][j]);
		}
	}
}


/*int entrernombre(){
	int taille;
	printf("Entrez la taile du tableau:");
	scanf("%d", &taille);
	return taille;
}
int* allouer(int taille){
	int *tab;
	tab=(int*)malloc(sizeof(int)*taille);
	if(tab==NULL){
		exit(0);
	}
	return tab;
}
void entrerValtab(int* tab,int taille){
	for(int i=0;i<taille;i++){
		printf("Entrez tab[%d]:", i);
		scanf("%d", tab+i);
	}
}
void affichertab(int* tab, int taille){
	//printf("\n");
	for(int i=0;i<taille;i++){
		printf("[%d]", *(tab+i));
	}
}
*/
