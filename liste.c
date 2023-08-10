#include<stdio.h>
#include<stdlib.h>

/*-----------------------------------------------------------------------------*/
typedef struct Cell{
	int donnee;
	struct Cell* suivant;
}TypeCellule;
/*-----------------------------------------------------------------------------*/

int SaisieDonnee(){
	int donnee;
	scanf("%d",&donnee);
	return donnee;
}
void AfficheDonnee(int donnee){
	printf("%d",donnee);
}
TypeCellule* InsereEnQueue(TypeCellule* L,int donnee){
	TypeCellule*p,*nouveau;
	nouveau=(TypeCellule*)malloc(sizeof(TypeCellule));
	nouveau->donnee=donnee;
	nouveau->suivant=NULL;
	if(L==NULL)
		L=nouveau;
	else{
		for(p=L;p->suivant!=NULL;p=p->suivant){}  //recherche de la dernière cellule
		p->suivant=nouveau;
	}
	return L;	
}
TypeCellule* SaisieListe(){
	char choix;
	int donnee;
	/*Déclaration d'une liste vide*/
	TypeCellule* L=NULL; // initialisation obligatoire
	puts("Voulez vous entrez une donnee");
	choix=getchar();
	getchar();
	while(choix=='o'){
		puts("Entrez une donnee");
		donnee=SaisieDonnee();
		getchar();
		L=InsereEnQueue(L,donnee);
		puts("Voulez vous continuer?");
		choix=getchar();
		getchar();
	}
	return L;
}
int sommeDonnee(TypeCellule*L){
	TypeCellule* p;
	int somme;
	for(p=L;p->suivant!=NULL;p=p->suivant){
		somme+=(p->donnee);
	}
	printf("La somme est %d\n",somme);
	return somme;
}
void Affichage(TypeCellule* L){
	TypeCellule*p;
	p=L;
	while(p!=NULL){
		AfficheDonnee(p->donnee);
		p=p->suivant;
	}
	puts("");
}
void Liberation(TypeCellule**pL){
	TypeCellule*p;
	while(*pL!=NULL){
		p=*pL;
		*pL=(*pL)->suivant;
		free(p);
	}
	*pL=NULL;
}

void adressePremierElement(TypeCellule*L,int n){
	TypeCellule*p;
	p=L;
	if(p==NULL)
		puts("NULL");
	else
		printf("L'adresse du premier element est %p ",n);
}
/*---------------------------------------------------------------------------*/

int main(){
	
	/*	Declaration de pointeur sur la tête de liste */
	TypeCellule* L=NULL;
	int n;
	L=SaisieListe();
	Affichage(L);
	int somme=sommeDonnee(L);
	adressePremierElement(L,n);
	Liberation(&L);
	
	return 0;
}
	
	
	
