#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
char*getUnite(int chiffre);
char*getDizaine(int chiffre);
char*getCentaine(int chiffre);
char*getMille(int chiffre);
char*getDizdeMille(int chiffre);
char*getCentdeMille(int chiffre);
char*getMillion(int chiffre);
char*getDizdeMillion(int chiffre);
char*getCentdeMillion(int chiffre);
char*getMilliard(int chiffre);
char*traduction(long int nombre);
char*traduction1(long int nombre);
char*traduction2(long int nombre);
char*traduction3(long int nombre);
char*traduction4(long int nombre);
char*traduction5(long int nombre);
int main(){
	char*chaine=NULL;
	char*resultat=NULL;
	chaine=(char*)malloc(20);
	long int nombre=0;
	chaine="64712";
	nombre=atoi("64712");
	if(nombre<10000000){
		resultat=traduction(nombre);
	}
	else if(nombre>=10000000 && nombre<100000000){
		resultat=traduction1(nombre);
	}
	else if(nombre>=100000000 && nombre<1000000000){
		resultat=traduction2(nombre);
	}
	else if(nombre>=1000000000 && nombre<1010000000){
		resultat=traduction3(nombre);
	}
	else if(nombre>=1010000000 && nombre<1100000000){
		resultat=traduction4(nombre);
	}
	else if(nombre>1100000000){
		resultat=traduction5(nombre);
	}
	printf("%s\n",resultat);
	
	return 0;
}
char*getUnite(int chiffre){
	char unite[10][7]={"","iray","roa","telo","efatra","dimy","enina","fito","valo","sivy"};
	char*result=unite[chiffre];
	return result;
}
char*getDizaine(int chiffre){
	char dizaine[10][10]={"","folo","roapolo","telopolo","efapolo","dimampolo","enimpolo","fitopolo","valopolo","sivifolo"};
	char*result=dizaine[chiffre];
	return result;
}
char*getCentaine(int chiffre){
	char centaine[10][15]={"","zato","roanjato","telonjato","efajato","dimanjato","eninjato","fitonjato","valonjato","sivinjato"};
	char*result=centaine[chiffre];
	return result;
}
char*getMille(int chiffre){
	char mille[10][20]={"","arivo","roa arivo","telo arivo","efatra arivo","dimy arivo","enina arivo","fito arivo","valo arivo","sivy arivo"};
	char*result=mille[chiffre];
	return result;
}
char*getDizdeMille(int chiffre){
	char dizdemille[10][20]={"","iray alina","roa alina","telo alina","efatra alina","dimy alina","enina alina","fito alina","valo alina","sivy alina"};
	char*result=dizdemille[chiffre];
	return result;
}
char*getCentdeMille(int chiffre){
	char centdemille[10][20]={"","iray hetsy","roa hetsy","telo hetsy","efatra hetsy","dimy hetsy","enina hetsy","fito hetsy","valo hetsy","sivy hetsy"};
	char*result=centdemille[chiffre];
	return result;
}
char*getMillion(int chiffre){
	char million[10][30]={"","iray tapitrisa","roa tapitrisa","telo tapitrisa","efatra tapitrisa","dimy tapitrisa","enina tapitrisa","fito tapitrisa","valo tapitrisa","sivy tapitrisa"};
	char*result=million[chiffre];
	return result;
}
char*getDizdeMillion(int chiffre){
	char dizdemillion[10][30]={"","folo tapitrisa","roapolo tapitrisa","telopolo tapitrisa","efapolo tapitrisa","dimampolo tapitrisa","enimpolo tapitrisa","fitopolo tapitrisa","valopolo tapitrisa","sivifolo tapitrisa"};
	char*result=dizdemillion[chiffre];
	return result;
}
char*getCentdeMillion(int chiffre){
	char million[10][30]={"","zato tapitrisa","roanjato tapitrisa","telonjato tapitrisa","efajato tapitra","dimamjato tapitrisa","enimjato tapitrisa","fitonjato tapitrisa","valonjato tapitrisa","sivinjato tapitrisa"};
	char*result=million[chiffre];
	return result;
}
char*getMilliard(int chiffre){
	char milliard[10][20]={"","iray lavitrisa","roa lavitrisa","telo lavitrisa","efatra lavitrisa","dimy lavitrisa","enina lavitrisa","fito lavitrisa","valo lavitrisa","sivy lavitrisa"};
	char*result=milliard[chiffre];
	return result;
}
char*traduction(long int nombre){
	 char*resultat=NULL;
	 char lettre3[7][30]={"","","","","",""," tapitrisa "};
	 char lettre2[7][30]={" amby "," sy "," sy "," sy "," sy "," sy ",""};
	 resultat = (char*)malloc(sizeof(char)*100);
	 strcpy(resultat,"");
	 int var=0;
	 int index=0;
	 do{
		 var = nombre%10;
		 nombre /= 10;
		 if(var && index<7){
			if(index==0){
				strcat(resultat,getUnite(var));
			}else if(index==1){
				strcat(resultat,getDizaine(var));
			}else if(index==2 ){
				strcat(resultat,getCentaine(var));
			}else if(index==3){
				strcat(resultat,getMille(var));
			}else if(index==4){
				strcat(resultat,getDizdeMille(var));
			}else if(index==5){
				strcat(resultat,getCentdeMille(var));
			}else if(index==6){
					strcat(resultat,getUnite(var));
			}
			strcat(resultat,lettre3[index]);
			if(nombre){
				strcat(resultat,lettre2[index]);
			}
		 }
		 index++;
	 }while(nombre!=0);
	 return resultat;	
	
}
char*traduction1(long int nombre){
	 char*resultat=NULL;
	 char lettre3[8][30]={"","","","","","",""," tapitrisa "};
	 char lettre2[8][30]={" amby "," sy "," sy "," sy "," sy "," sy "," amby ",""};
	 resultat = (char*)malloc(sizeof(char)*100);
	 strcpy(resultat,"");
	 int var=0;
	 int index=0;
	 do{
		 var = nombre%10;
		 nombre /= 10;
		 if(var && index<8){
			if(index==0){
				strcat(resultat,getUnite(var));
			}else if(index==1){
				strcat(resultat,getDizaine(var));
			}else if(index==2 ){
				strcat(resultat,getCentaine(var));
			}else if(index==3){
				strcat(resultat,getMille(var));
			}else if(index==4){
				strcat(resultat,getDizdeMille(var));
			}else if(index==5){
				strcat(resultat,getCentdeMille(var));
			}else if(index==6){
					strcat(resultat,getUnite(var));
			}else if(index==7){
				strcat(resultat,getDizaine(var));
			}
			strcat(resultat,lettre3[index]);
			if(nombre){
				strcat(resultat,lettre2[index]);
			}
		 }
		 index++;
	 }while(nombre!=0);
	 return resultat;	
	
}
char*traduction2(long int nombre){
	 char*resultat=NULL;
	 char lettre3[11][30]={"","","","","","","","","",""," lavitrisa"};
	 char lettre2[11][30]={" amby "," sy "," sy "," sy "," sy "," sy "," amby "," sy "," sy "," sy ",""};
	 resultat = (char*)malloc(sizeof(char)*100);
	 strcpy(resultat,"");
	 int var=0;
	 int index=0;
	 do{
		 var = nombre%10;
		 nombre /= 10;
		 if(var && index<15){
			if(index==0){
				strcat(resultat,getUnite(var));
			}else if(index==1){
				strcat(resultat,getDizaine(var));
			}else if(index==2 ){
				strcat(resultat,getCentaine(var));
			}else if(index==3){
				strcat(resultat,getMille(var));
			}else if(index==4){
				strcat(resultat,getDizdeMille(var));
			}else if(index==5){
				strcat(resultat,getCentdeMille(var));
			}else if(index==6){
					strcat(resultat,getUnite(var));
			}else if(index==7){
				strcat(resultat,getDizaine(var));
			}else if(index==8){
				strcat(resultat,getCentdeMillion(var));
			}else if(index==9){
				strcat(resultat,getMilliard(var));
			}
			strcat(resultat,lettre3[index]);
			if(nombre){
				strcat(resultat,lettre2[index]);
			}
		 }
		 index++;
	 }while(nombre!=0);
	 return resultat;	
}
char*traduction3(long int nombre){
	 char*resultat=NULL;
	 char lettre3[11][30]={"","","","","","","","","",""," lavitrisa"};
	 char lettre2[11][30]={" amby "," sy "," sy "," sy "," sy "," sy "," sy "," sy "," sy ","sy",""};
	 resultat = (char*)malloc(sizeof(char)*100);
	 strcpy(resultat,"");
	 int var=0;
	 int index=0;
	 do{
		 var = nombre%10;
		 nombre /= 10;
		 if(var && index<15){
			if(index==0){
				strcat(resultat,getUnite(var));
			}else if(index==1){
				strcat(resultat,getDizaine(var));
			}else if(index==2 ){
				strcat(resultat,getCentaine(var));
			}else if(index==3){
				strcat(resultat,getMille(var));
			}else if(index==4){
				strcat(resultat,getDizdeMille(var));
			}else if(index==5){
				strcat(resultat,getCentdeMille(var));
			}else if(index==6){
					strcat(resultat,getMillion(var));
			}else if(index==9){
				strcat(resultat,getMilliard(var));
			}
			strcat(resultat,lettre3[index]);
			if(nombre){
				strcat(resultat,lettre2[index]);
			}
		 }
		 index++;
	 }while(nombre!=0);
	 return resultat;	
}
char*traduction4(long int nombre){
char*resultat=NULL;
	 char lettre3[11][30]={"","","","","","","","","",""," lavitrisa"};
	 char lettre2[11][30]={" amby "," sy "," sy "," sy "," sy "," sy "," amby "," sy "," sy "," sy ",""};
	 resultat = (char*)malloc(sizeof(char)*100);
	 strcpy(resultat,"");
	 int var=0;
	 int index=0;
	 do{
		 var = nombre%10;
		 nombre /= 10;
		 if(var && index<15){
			if(index==0){
				strcat(resultat,getUnite(var));
			}else if(index==1){
				strcat(resultat,getDizaine(var));
			}else if(index==2 ){
				strcat(resultat,getCentaine(var));
			}else if(index==3){
				strcat(resultat,getMille(var));
			}else if(index==4){
				strcat(resultat,getDizdeMille(var));
			}else if(index==5){
				strcat(resultat,getCentdeMille(var));
			}else if(index==6){
					strcat(resultat,getUnite(var));
			}else if(index==7){
				strcat(resultat,getDizdeMillion(var));
			}else if(index==9){
				strcat(resultat,getMilliard(var));
			}
			strcat(resultat,lettre3[index]);
			if(nombre){
				strcat(resultat,lettre2[index]);
			}
		 }
		 index++;
	 }while(nombre!=0);
	 return resultat;	
}
char*traduction5(long int nombre){
		 char*resultat=NULL;
	 char lettre3[11][30]={"","","","","","","","","",""," lavitrisa"};
	 char lettre2[11][30]={" amby "," sy "," sy "," sy "," sy "," sy "," amby "," sy "," sy "," sy ",""};
	 resultat = (char*)malloc(sizeof(char)*100);
	 strcpy(resultat,"");
	 int var=0;
	 int index=0;
	 do{
		 var = nombre%10;
		 nombre /= 10;
		 if(var && index<15){
			if(index==0){
				strcat(resultat,getUnite(var));
			}else if(index==1){
				strcat(resultat,getDizaine(var));
			}else if(index==2 ){
				strcat(resultat,getCentaine(var));
			}else if(index==3){
				strcat(resultat,getMille(var));
			}else if(index==4){
				strcat(resultat,getDizdeMille(var));
			}else if(index==5){
				strcat(resultat,getCentdeMille(var));
			}else if(index==6){
					strcat(resultat,getUnite(var));
			}else if(index==7){
				strcat(resultat,getDizaine(var));
			}else if(index==8){
				strcat(resultat,getCentdeMillion(var));
			}else if(index==9){
				strcat(resultat,getMilliard(var));
			}
			strcat(resultat,lettre3[index]);
			if(nombre){
				strcat(resultat,lettre2[index]);
			}
		 }
		 index++;
	 }while(nombre!=0);
	 return resultat;	
}
