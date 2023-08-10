#include<stdio.h>


void entrertab(int tab[5][5]);
void affichetab(int tab[5][5]);

int main(){
	int tab[5][5];
	entrertab(tab);
	affichetab(tab);
	return 0;
}

void entrertab(int tab[5][5]){
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("Entrez la valeur de tab[%d][%d]:", i, j);
			scanf("%d", &(tab[i][j]));
		}
	}
}

void affichetab(int tab[5][5]){
	for(int i=0;i<5;i++){
		printf("\n");
		for(int j=0;j<5;j++){
			printf("[%d]", tab[i][j]);
		}
	}
}
