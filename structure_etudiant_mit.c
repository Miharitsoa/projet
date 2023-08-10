#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"etudiant.h"

int main(){
	FILE*fp;
	int i=0;
	int occ;
	fp=fopen("etudiant.csv","a+");
	if(fp==NULL)
		exit(1);
	puts("Combien d'occurences voulez vous creer?");scanf("%d",&occ);
	Etudiant *e1;
	e1=malloc(occ*sizeof(Etudiant));
	get_info(fp,e1,i,occ);
	fclose(fp);
	return 0;
}
