#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	float x;
	int min,max,n,taille;
	printf("Entrez la borne min: ");
	scanf("%d",&min);
	printf("Entrez la borne max: ");
	scanf("'%d",&max);
/*	printf("Entrez le nombre de sous-intervalle souhaite: ");
	scanf("%d",&n);
	taille=(int)((max+min)/n);   */
	float y;
		for(x=min;x<=max;x++){
			y=2*x*x-x-1;
			FILE*fp=fopen("point.csv","a");
			fprintf(fp,"%f;%f",x,y);
			fclose(fp);
		}

	return 0;
}
