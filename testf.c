#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	FILE*fp;
	char ligne[255];
	char ligne1[50]="Nom: ";
	char ligne2[50]="Prenom: ";
	char ligne3[50]="Taille: ";
//	char result;
	fp=fopen("fichier.txt","a");
	char nom[30];
		printf("Entrez votre nom: ");
		fgets(nom,29,stdin);
		strcat(ligne1,nom);
		char prenom[30];
		printf("Saisir prenom: ");
		fgets(prenom,29,stdin);
		strcat(ligne2,prenom);
		int taille;
		char len[30];
		printf("Entrez votre taille: ");
		fgets(len,29,stdin);
		strcat(ligne3,len);
		

	if(fp==NULL){
		printf("Error\n");
		exit(1);
	}
	else{
		fprintf(fp,"%s\n%s\n%s\n",ligne1,ligne2,ligne3);
	/*	while(!feof(fp)){
		//	result=fgetc(fp);
		//	printf("%c", result);
		//	printf("%s", ligne);
		//	fgets(ligne,255,fp);
		
		printf("%s",ligne);
		fgets(ligne,255,fp);
		} */
	}
	fclose(fp);
	return 0;
}
