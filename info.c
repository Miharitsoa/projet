#include<stdio.h>
int main(){ 
	char nom[20];
	char prenom[20], naissance[40], residence[40];
	int natal=0, age=0; 
	int annee=0;
	char serie[4]; 

	printf("Quel est ton nom ?");
	scanf("%s", nom);

	printf("Quel est ton prenom ?");
	scanf("%s", prenom);

	printf("Ou es tu ne ?");
	scanf("%s", naissance);

	printf("Ou habites tu ?");
	scanf("%s", residence);

	printf("Quand es tu ne ?"); 
	scanf("%d", &natal);

	printf("Quel age as tu ?");
	scanf("%d", &age);

	printf("Quand as tu eu ton bac?");
	scanf("%d", &annee);

	printf("Quelle est ta serie ?");
	scanf("%s", serie);

	return 0;
}

