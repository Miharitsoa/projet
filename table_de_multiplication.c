#include<stdio.h>
#include<math.h>
void table(int n);
int main(){
	int n;
	printf("Table de multiplicaton\n");

/// Entrée
	printf("Entrez un  nombre\n");
	scanf("%d",&n);

/// Traitement
	table(n);

/// Sortie
	printf("La table de multiplication par %d est:\n",n);

	return 0;
}

void table(int n){
	int i=0,produit=0;
	for(i=0;i<=10;i++){
		produit=n*i;
		printf("%d * %d = %d\n", n, i, produit);
	}
}
