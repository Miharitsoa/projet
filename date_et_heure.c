#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
char*get_the_date(char*input);
char*get_the_hour(char*input);
char*jour0(char*date0);
char*jour0_bis(char*jour);
char*isole_mois_annee(char*dateO);
int getheure(char*heure0);
int getminute(char*heure0);
int getseconde(char*heure0);
float heure_vers_jour(int heure,int minute,int seconde);;
float get_jour_decimale(int day2,float day1);
char*day_to_chaine(float day);
int testvirgule(char*jour1);
float generer_jour_flottante(char*jour1);
float charToDouble(char*jour1,int long2);
void affiche_date(char*date0);
void convertir_jour_flottante(float jour3);
int main(){
	char*input=(char*)malloc(40);
	char*date0=(char*)malloc(20);
	char*heure0=(char*)malloc(20);
	char*jour=(char*)malloc(10);
	char*jour1=(char*)malloc(10);
	char*resultat=(char*)malloc(40);
	char*day4=(char*)malloc(20);
	char*tab=(char*)malloc(20);
///	float jour3=0.0;
	int heure=0,minute=0,seconde=0;
	int day=0,day2=0;
	float day1=0.0;
	input="23/7/2023 12:00:00";
	date0=get_the_date(input);
	heure0=get_the_hour(input);
	heure=getheure(heure0);
	minute=getminute(heure0);
	seconde=getseconde(heure0);
	jour=jour0(date0);
	jour1=jour0_bis(jour);
	tab=isole_mois_annee(date0);
	day1= heure_vers_jour(heure,minute,seconde);
	day2=atoi(jour1);
	day=get_jour_decimale(day2,day1);
	day4=day_to_chaine(day);
	strcat(resultat,day4);
	strcat(resultat,tab);
	printf("%s",resultat);
/*	if(testvirgule(jour1)==0){
		jour3=generer_jour_flottante(jour1);
///		printf("On obtient %f jour\n", jour3);
		affiche_date(date0);
		convertir_jour_flottante(jour3);
	}
	if(testvirgule(jour1)==1){
		printf("On est le %s a 0h0min0s\n",date0);
	}
	
*/	
	return 0;
}  
char*jour0(char*date0){
	char*jour=(char*)malloc(10);
	
	int pos_slash=0;
	for(int i=0;i<strlen(date0);i++){
		if(date0[i]=='/'){
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
		if(jour[i]=='/'){
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
		if(jour1[i]=='.'){
			return 0;
		}
	}
	return 1;
}
float generer_jour_flottante(char*jour1){
	int nb=0;
	int pos_virg;
	int j=0;
	int m=0;
	float heure1=0.0;
	for(int i=0;i<strlen(jour1);i++){
		if(jour1[i]=='.'){
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
		if(date0[i]=='.'){
			for(int j=0;strlen(date0);j++){
				i++;
				if(date0[i]==47){
					break;
				}
			};
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
char*get_the_date(char*input){
	char*date=(char*)malloc(20);
	int pos_esp=0;
	int index=0;
	for(int i=0;i<strlen(input);i++){
		if(input[i]==' '){
			pos_esp=i;
			for(int j=0;j<pos_esp;j++){
				date[index]=input[j];
				index++;
			}
		}
	}
	return date;
}
char*get_the_hour(char*input){
	char*heure=(char*)malloc(20);
	int pos_esp=0;
	int index=0;
	for(int i=0;i<strlen(input);i++){
		if(input[i]==' '){
			pos_esp=i;
			for(int j=pos_esp+1;j<strlen(input);j++){
				heure[index]=input[j];
				index++;
			}
		}
	}
	return heure;
}
int getheure(char*heure0){
	char*heure=(char*)malloc(3);
	int h=0;
	int index=0;
	int pos1=0;
	int pos2=0;
	for(int i=0;i<strlen(heure0);i++){
		if(heure0[i]==':'){
			pos1=i;
			for(int j=0;j<pos1;j++){
				if(heure0[j]==':'){
					pos2=j;
					for(int k=0;k<pos2;k++){
						heure[index]=heure0[k];
						index++;
					}
				}
			}
		}
	}
	h=atoi(heure);
	return h;
}
int getminute(char*heure0){
	char*minute=(char*)malloc(3);
	int m=0;
	int index=0;
	int pos1=0;
	int pos2=0;
	for(int i=0;i<strlen(heure0);i++){
		if(heure0[i]==':'){
			pos1=i;
			for(int j=0;j<pos1;j++){
				if(heure0[j]==':'){
					pos2=j;
					for(int k=pos2+1;k<pos1;k++){
						minute[index]=heure0[k];
						index++;
					}
				}
			}
		}
	}
	m=atoi(minute);
	return m;
}
int getseconde(char*heure0){
	char*seconde=(char*)malloc(3);
	int s=0;
	int index=0;
	int pos1=0;
	for(int i=0;i<strlen(heure0);i++){
		if(heure0[i]==':'){
			pos1=i;
			for(int j=pos1;j<strlen(heure0);j++){
				seconde[index]=heure0[j];
				index++;
			}
		}
	}
	s=atoi(seconde);
	return s;
}
float heure_vers_jour(int heure,int minute,int seconde){
	float day1=0.0;
	float heure1=0.0,heure2=0.0,h=0.0;
	heure1=minute/60;
	heure2=seconde/3600;
	h=heure+heure1+heure2;
	day1=h/24;
	return day1;
}
float get_jour_decimale(int day2,float day1){
	float day=0.0;
	day=day2+day1;
	return day;
}
char*day_to_chaine(float day){
	char*day4=(char*)malloc(8);
	sprintf(day4,"%g",day);
	return day4;
}
char*isole_mois_annee(char*date0){
	char*tab=(char*)malloc(10);
	int index=0;
	int pos_slash1=0;
	int pos_slash2=0;
	for(int i=0;i<strlen(date0);i++){
		if(date0[i]=='/'){
			pos_slash1=i;
			for(int j=0;j<pos_slash1;j++){
				if(date0[j]=='/'){
					pos_slash2=j;
					for(int k=pos_slash2;k<strlen(date0);k++){
						tab[index]=date0[k];
						index++;
					}
				}
			}
		}
	}
	return tab;
}
