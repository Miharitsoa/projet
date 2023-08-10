#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"etudiant.h"

int main(){
	FILE*fp;
	FILE*fp1;
	fp=fopen("etudiant.csv","r");
	fp1=fopen("etudiant1.csv","a+");

	Etudiant *e1;
	int count=0;
	count=count_line(count,fp);
	rewind(fp);
	e1=malloc(sizeof(Etudiant)*count);
	e1=recupere_info_etudiant(fp,count);
	e1=tri_info(e1,count);
	fp1=redirect_info(e1,count);
	fclose(fp);
	fclose(fp1);
	return 0;
}

