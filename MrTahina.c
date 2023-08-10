#include "stdio.h"
#include "math.h"
#include "string.h"
#include "stdlib.h"

  //</h1>
int charToInt(char* aTransf);
int TestVirgule(char* aTransf);
double charToDouble(char* aTransf);
int testPositionBarre(char* date);
int avecOuSansVirgule(char* aTransf);
int doubeToSecond(double apresVirgule);
void secondeToHour(int seconde, char* aTransf);

int main(){
	int seconde=0;
	double Transfa=0.0000000000;
	int transfa=0;
	
	char* aTransf=malloc(sizeof(char)*50);
	printf("Donner la date:"); scanf("%s", aTransf);
	if(avecOuSansVirgule(aTransf)==0){
		Transfa=charToDouble(aTransf);
		//printf("Apres cast avec virgule, il devient %f", Transfa);
	}
	else if(avecOuSansVirgule(aTransf)==1){
		transfa=charToInt(aTransf);
		//printf("Apres cast sans virgule, il devient %d", transfa);
	}
	else{
		system("figlet error");
	}
	seconde=doubeToSecond(Transfa);
	//printf("\nAprès conversion %f devient %ds\n", Transfa, seconde);
	secondeToHour(seconde, aTransf);
	return 0;
}

int TestVirgule(char* aTransf){
	int positionBarre=testPositionBarre(aTransf);
	int position=0;
	for(int i=0;i<positionBarre;i++){
	position++;	
		if(aTransf[i]==46 || aTransf[i]==59){
			break;
		
		}
	}
	return position;
}

int charToInt(char* aTransf){
	int positionBarre=testPositionBarre(aTransf)-1;
	int j=positionBarre-1;
	int IntReturn=0;
	for(int i=0;i<positionBarre;i++){
		IntReturn+=(aTransf[i]-48)*pow(10,j);
	j--;
	}
	return IntReturn;
}

double charToDouble(char* aTransf){
	int positionBarre=testPositionBarre(aTransf)-1;
	double DoubleReturn=0.000000000, apresVirgule=0.000000000000;
	int positionVirgule=0, avantVirgule=0;
	positionVirgule=TestVirgule(aTransf);

	//--------------------------------------//
	int k=positionVirgule-2;
	int x= positionBarre-positionVirgule;
	for(int i=0;i<(positionVirgule-1);i++){
		avantVirgule+=(aTransf[i]-48)*pow(10,k);
		k--;
		}
	//--------------------------------------------//
	int j=x-1;
	for(int i=positionVirgule;i<positionBarre;i++){
	apresVirgule+=(aTransf[i]-48)*pow(10,j);
	j--;
	}
	DoubleReturn=apresVirgule*pow(10,-x);
	return DoubleReturn;
}

int testPositionBarre(char* aTransf){
	int positionBarre=0;
	for(int i=0;i<strlen(aTransf);i++){
		positionBarre++;
		if(aTransf[i]==47){
		break;
		}	
	}
	return positionBarre;
}

int avecOuSansVirgule(char* aTransf){
	int positionBarre=testPositionBarre(aTransf);
	for(int i=0;i<positionBarre;i++){
		if(aTransf[i]==46 || aTransf[i]==59){
			return 0;
		}
		}
	return 1;
}

int doubeToSecond(double apresVirgule){
	int seconde=0;
	seconde=24*3600*apresVirgule;
	return seconde;
}

void secondeToHour(int seconde, char* aTransf){
	//char* converti=malloc(sizeof(char)*25);
	int second=0,minute=0,heure=0;
	
	if(seconde>60){
		second=seconde%60;
		minute=seconde/60;
	}
	if(minute>60){
		int tmp=minute;
		minute=tmp%60;
		heure=tmp/60;
	}
	printf("Apres cette date devient: ");
	printf("%dh%dmn%ds:",heure,minute,second);
	for(int i=0;i<strlen(aTransf);i++){
		if(aTransf[i]==46 || aTransf[i]==59){
		for(int j=i;strlen(aTransf);j++){
		i++;
			if(aTransf[i]==47){
				break;
			}
		}
	}
		printf("%c", aTransf[i]);
	}
	//return converti;
}
