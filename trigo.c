#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.1415926536
double degtoRad(int angle);
int main(){
	FILE*fp;
	fp=fopen("table_trigo.csv","w+");
	double sinus[360];
	double cosinus[360];
	double tangente[360];
	double cotangente[360];
	for(int i=0;i<=360;i++){
		sinus[i]=sin(degtoRad(i));
		cosinus[i]=cos(degtoRad(i));
		tangente[i]=tan(degtoRad(i));
		cotangente[i]=(cos(degtoRad(i))/sin(degtoRad(i)));
		fprintf(fp,"%d;%lf;%lf;%lf;%lf\n",i,cosinus[i],sinus[i],tangente[i],cotangente[i]);
	}
	fclose(fp);
	return 0;
}
double degtoRad(int angle){
	double valradian=0.000000;
	valradian=((angle*PI)/180.0);
	return valradian;
}
