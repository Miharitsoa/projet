#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
char*jour0(char*date0);
char*jour0_bis(char*jour);
char*isoler_partie_entiere(char*jour1);
char*isole_apres_slash(char*date0);
int testvirgule(char*jour1);
float generer_jour_flottante(char*jour1);
float charToDouble(char*jour1,int long2);
void affiche_date(char*date0);
void convertir_jour_flottante(float jour3);
int main(){
	char*date0=(char*)malloc(20);
/*	char*date2=(char*)malloc(7);
	char*right1=(char*)malloc(10);
	char*right2=(char*)malloc(10);  */ 
	char*jour=(char*)malloc(10);
	char*jour1=(char*)malloc(10);
	float jour3=0.0;
	
	printf("Entrez la date a traiter:\n");
	gets(date0);
	jour=jour0(date0);
	jour1=jour0_bis(jour);
/*	date2=isoler_partie_entiere(jour1);
	right1=isole_apres_slash(date0);
	right2=isole_apres_slash(jour);    */  
	printf("On a %s\n",jour1);
	if(testvirgule(jour1)==0){
		jour3=generer_jour_flottante(jour1);
///		printf("On obtient %f jour\n", jour3);
		affiche_date(date0);
		convertir_jour_flottante(jour3);
	}
	if(testvirgule(jour1)==1){
		printf("On est le %s a 0h0min0s\n",date0);
	}
	
	
	return 0;
}
char*jour0(char*date0){
	char*jour=(char*)malloc(10);
	
	int pos_slash=0;
	for(int i=0;i<strlen(date0);i++){
		if(date0[i]==47){
			pos_slash=i;
			for(int j=0;j<pos_slash;j++){
				jour[j]=date0[j];
			}
		}
		
	}
	return jour;
}
char*jour0_bis(char*jour){
	char*jour1=(char*)malloc(10);
	
	int pos_slash=0;
	for(int i=0;i<strlen(jour);i++){
		if(jour[i]==47){
			pos_slash=i;
			for(int j=0;j<pos_slash;j++){
				jour1[j]=jour[j];
			}
		}
	}
	return jour1;
}
int testvirgule(char*jour1){
	for(int i=0;i<strlen(jour1);i++){
		if(jour1[i]==46 || jour1[i]==59){
			return 0;
		}
	}
	return 1;
}
char*isoler_annee(char*date0){
	char*annee=(char*)malloc(7);
	int pos_slash=0;
	int pos_slash1=0;
	for(int i=0;i<strlen(date0);i++){
		if(date0[i]==47){
			pos_slash=i;
			for(int j=pos_slash+1;j<strlen(date0);j++){
				if(date0[j]==47){
					pos_slash1=j;
					for(int k=pos_slash1+1;k<strlen(date0);k++){
					annee[k]=date0[k];
			}
		}
	}
	return annee;
}
char*isole_apres_slash(char*date0){
	char*right=(char*)malloc(10);
	int pos_slash=0;
	for(int i=0;i<strlen(date0);i++){
		if(date0[i]==47){
			pos_slash=i;
			for(int j=pos_slash;j<strlen(date0);j++){
				right[j]=date0[j];
			}
		}
	}
	return right;
}			
float generer_jour_flottante(char*jour1){
	int nb=0;
	int pos_virg;
	int j=0;
	int m=0;
	float heure1=0.0;
	for(int i=0;i<strlen(jour1);i++){
		if(jour1[i]==46 || jour1[i]==59){
			pos_virg=i;
			j=strlen(jour1)-pos_virg+1;
			m=j-2;
			for(int k=pos_virg+1;k<strlen(jour1);k++){
				nb+=(jour1[k]-48)*pow(10,m);
				m--;
			}
			
			heure1=nb*pow(10,-j+1); 
		}
	}
	
	return heure1;
}

float charToDouble(char*jour1,int long2){
	int nb=0;
	float dec=0.0000;
	int k=long2-2;
	for(int i=1;i<long2;i++){
		nb+=(jour1[i]-48)*pow(10,k);
		k--;
	}
	int n=long2-1;
	dec=nb*pow(10,-n);
	printf("On obtient %f h\n", dec);
	return dec;
}
void affiche_date(char*date0){
	printf("On est le "); 
	for(int i=0;i<strlen(date0);i++){
		if(date0[i]==46 || date0[i]==59){
			for(int j=0;strlen(date0);j++){
				i++;
				if(date0[i]==47){
					break;
				}
			}
		}
		printf("%c",date0[i]);
	}
}
void convertir_jour_flottante(float jour3){
	int heure=0,minute=0,seconde=0,dayTosecond=0;
	dayTosecond=24*3600*jour3;
	if(dayTosecond>60){
		seconde=dayTosecond%60;
		minute=dayTosecond/60;
	}
	if(minute>60){
		int tmp=minute;
		minute=tmp%60;
		heure=tmp/60;
	}
	printf(" a %dh%dmin%ds\n",heure,minute,seconde);
}
