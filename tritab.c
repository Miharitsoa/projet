#include <stdio.h>
#include <stdlib.h>
void trie(int *tab,int *taille);
void getdata(int* tab,int *taille);
void displayresult(int* tab,int *taille);
int main(){
	int *tab;
	int taille=0;
	printf("Entrer la taille:");scanf("%d",&taille);
	tab=(int*)malloc(sizeof(int)*taille);
	getdata(tab,&taille);
	trie(tab,&taille);
	displayresult(tab,&taille);
	free(tab);
	return 0;
}
void getdata(int* tab,int *taille){
	for(int i=0;i<*taille;i++){
		printf("Entrer tab[%d]:",i);scanf("%d",tab+i);
	}
}
void displayresult(int* tab,int *taille){
	int max=0;
	printf("Entrer max:");scanf("%d",&max);
	for(int i=0;i<max;i++){
		printf(" %d",*(tab+i));
	}
	printf("\n");
}
void trie(int *tab,int *taille){
	int index=0;
	for(int i=0;i<*taille;i++){
		for(int j=i+i;j<*taille;j++){
			if(tab[i]==tab[j]){
				index=j;
				for(int b=index;b<*taille-1;b++){
				tab[b]=tab[b+1];
				}
				(*taille)--;
			}
		}
	}
			
	
	for(int i=0;i<*taille;i++){
		for(int j=i+1;j<*taille;j++){
			if(tab[i]<tab[j]){
				int tmp;
				tmp=tab[i];
				tab[i]=tab[j];
				tab[j]=tmp;
			}
		}
	}
}


				
				
				
				
