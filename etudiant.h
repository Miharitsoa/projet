#ifndef __ETUDIANT_H_
#define __ETUDIANT_H_

typedef struct Etudiant{
	char nom[30];
	char prenom[30];
	char mention[30];
	char parcours[30];
	char grade[30];
	char niveau[30];
	char num_inscription[30];
} Etudiant;

Etudiant*get_info(FILE*fp,Etudiant*e1,int i,int occ){
	for(i=0;i<occ;i++){
		printf("Entrez respectivement les infos sur votre carte d'etudiant en les espacant:\n");
	//	scanf("%s %s %s %s %s %s",e1.nom,e1.mention,e1.parcours,e1.grade,e1.niveau,e1.num_inscription);
		fgets(e1[i].nom,30,stdin);e1[i].nom[strcspn((e1[i].nom),"\n")]='\0';
		fgets(e1[i].prenom,30,stdin);e1[i].prenom[strcspn((e1[i].prenom),"\n")]='\0';
		fgets(e1[i].mention,30,stdin);e1[i].mention[strcspn((e1[i].mention),"\n")]='\0';
		fgets(e1[i].parcours,30,stdin);e1[i].parcours[strcspn((e1[i].parcours),"\n")]='\0';
		fgets(e1[i].grade,30,stdin);e1[i].grade[strcspn((e1[i].grade),"\n")]='\0';
		fgets(e1[i].niveau,30,stdin);e1[i].niveau[strcspn((e1[i].niveau),"\n")]='\0';
		fgets(e1[i].num_inscription,30,stdin);e1[i].num_inscription[strcspn((e1[i].num_inscription),"\n")]='\0';  
		fprintf(fp,"%s;%s;%s;%s;%s;%s;%s\n",e1[i].nom,e1[i].prenom,e1[i].mention,e1[i].parcours,e1[i].grade,e1[i].niveau,e1[i].num_inscription);
	}
	return e1;
}

int count_line(int count , FILE *file){
	
	while (! feof (file)){
			if(fgetc(file) == '\n'){
				count++;
			}
	}
	
	return count;
}

Etudiant*recupere_info_etudiant(FILE*fp , int count){
	char line[1000];
	Etudiant *e1 = malloc(sizeof(Etudiant)*count);
	for(int i=0;fgets(line,1000,fp) != NULL;i++){
		sscanf(line,"%[^;];%[^;];%[^;];%[^;];%[^;];%[^;];%[^\n]",e1[i].nom,e1[i].prenom,e1[i].mention,e1[i].parcours,e1[i].grade,e1[i].niveau,e1[i].num_inscription);
	}
	return e1;
}

Etudiant*tri_info(Etudiant*e1 , int count){
	for(int i=1 ; i<count ; i++){
		for(int j=i+1 ; j<count ; j++){
			if(strcmp(e1[i].nom,e1[j].nom)>1){
				char tmp[300];
				strcpy(tmp , e1[j].nom);strcpy(e1[j].nom , e1[i].nom);strcpy(e1[i].nom , tmp);
				strcpy(tmp , e1[j].prenom);strcpy(e1[j].prenom , e1[i].prenom);strcpy(e1[i].prenom , tmp);
				strcpy(tmp , e1[j].mention);strcpy(e1[j].mention , e1[i].mention);strcpy(e1[i].mention , tmp);
				strcpy(tmp , e1[j].parcours);strcpy(e1[j].parcours , e1[i].parcours);strcpy(e1[i].parcours , tmp);
				strcpy(tmp , e1[j].grade);strcpy(e1[j].grade , e1[i].grade);strcpy(e1[i].grade , tmp);
				strcpy(tmp , e1[j].niveau);strcpy(e1[j].niveau , e1[i].niveau);strcpy(e1[i].niveau , tmp);
				strcpy(tmp , e1[j].num_inscription);strcpy(e1[j].num_inscription , e1[i].num_inscription);strcpy(e1[i].num_inscription , tmp);
				
			}
		}
	}
	
	return e1;
}

FILE*redirect_info(Etudiant* e1 , int count){
	FILE* fp1 = fopen("etudiant1.csv","a+");
	
	for(int i=0;i<count;i++){
		fprintf(fp1,"%s;%s;%s;%s;%s;%s;%s\n",e1[i].nom,e1[i].prenom,e1[i].mention,e1[i].parcours,e1[i].grade,e1[i].niveau,e1[i].num_inscription);
	}
	
	
	return fp1;
}



#endif

