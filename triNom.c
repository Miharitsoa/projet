#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define taille 3

void getData(int tab[][]);

int main(){
	int tab[taille][taille];
	//printf("Hello World");
	getData(tab);
	
	
	return 0;
}

void getData(int tab[][]){
	for(int i=0;i<taille;i++){
		for(int j=0;j<taille;j++){
			printf("Entrez le tableau n°(%d,%d): ", i+1, j+1); scanf("%d", &tab[i][j]); 
		}
	}
	
}
