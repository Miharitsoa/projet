#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ta 10000
#define col 1000
void affiche(int a,FILE *tfile,char **cfile1);
char **alouer(char **cfile1);
char **recuperer(char **cfile1, int a);
void write(FILE *tfile1, char **cfile2, int a);

int main(){
	FILE *tfile;
	FILE *tfile1;
	tfile = fopen("/etc/passwd", "r");
	tfile1 = fopen("/home/mit/Documents/user_pass.csv", "w+");
	char * isa = malloc(255);
	char **cfile1 = NULL;
	cfile1 = alouer(cfile1);
	char **cfile2 = NULL;
	cfile2 = alouer(cfile2);
	FILE *asa = popen("cat /etc/passwd | wc -l", "r");
	fgets(isa, 255,  asa);
	int a = atoi(isa);
	affiche(a, tfile, cfile1);printf("\n\n=>\n");
	cfile2 = recuperer(cfile1, a);
	write(tfile1, cfile2, a);
	fclose(tfile);
	fclose(tfile1);
		
	return 0;
}

void write(FILE *tfile1, char **cfile2, int a){
	int e = 0;
	for(int i=0;i<a;i++){
		for(int j=0;j<strlen(cfile2[i]);j++){
			if(i==0){
				fprintf(tfile1, "User,Repertoire personnel,Interpreteur bash");
				fputs("\n", tfile1);
				break;
			}
			else if(cfile2[i][j]==58){
				e++;
				if(e==5||e==6){
					fputs(",", tfile1);
				}
			}
			else{
				fprintf(tfile1, "%c", cfile2[i][j]);
			}
			if(j==strlen(cfile2[i])-1){
				e=0;
			}
		}
	}
}

char **alouer(char **cfile1){
	char **a = (char**)malloc(col*sizeof(char*));
	for(int i=0;i<ta;i++){
		a[i] = malloc(ta);
	}
	return a;
}

char **recuperer(char **cfile1, int a){
	char **b = NULL;
	b = alouer(b);
	int c = 0;
	char *g = malloc(ta);
	int *f = malloc(ta);
	for(int i=0, m=0;i<a;i++){
		for(int j=0, k=0, l=0;j<strlen(cfile1[i]);j++){
			if(cfile1[i][j]==58){
				c++;
				b[i][k] = ':';;
				k++;
			}
			else if(c==2){
				g[l] = cfile1[i][j];
				l++;
			}
			if(c==3){
				int s = atoi(g);
				if(s>10000&&s<60000){
					printf("%d ,", s);
					f[m] = i;
					m++;
				}
			}
			else if(c==0||c>4){
				b[i][k] = cfile1[i][j];
				k++;
			}
			if(j==strlen(cfile1[i])-1){
				c=0;
			}
		}
	}
	for(int i=0;i<a;i++){
		printf("%s\t%d = %d\n", b[i], i, f[i]);
	}
	
	return b;
}

void affiche(int a,FILE *tfile,char **cfile1){
	if(tfile == NULL){
		exit(1);
	}
	else{
		for(int i=0;i<a;i++){
			if(feof(tfile)==0){
				fgets(cfile1[i], 255, tfile);
			}
			else if(i==a){
				cfile1[i] = '\0';
				break;
			}
		}
	}
	for(int i=0;i<a;i++){
		printf("%s", cfile1[i]);
	}
}
