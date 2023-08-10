#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"pc.h"

int main(){
	FILE*fp;
	int occ;
	fp=fopen("pc.csv","a+");
	if(fp==NULL)
		exit(EXIT_FAILURE);
	puts("Nb d'occurences:");scanf("%d",&occ);
	Pc *pc1=(Pc*)malloc(sizeof(Pc)*occ);
	pc1=get_info(fp,pc1,i,occ);
	fclose(fp);
	return 0;
}









