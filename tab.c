#include<stdio.h>
void entrertab(int* tab);
void affichetab(int* tab);
void tritab(int*tab);
void tritabH(int*tab);
void affichetritab(int*tab);
int main(){
	int tab[10];
	entrertab(tab);
	affichetab(tab);
//	tritab(tab);
	tritabH(tab);
	affichetritab(tab);
	return 0;
}

void entrertab(int* tab){
	for(int i=0;i<10;i++){
		printf("Entrer la valeur numero %d du tableau: ", i);
		scanf("%d", tab+i);
	}
}

void affichetab(int* tab){
	for(int i=0;i<10;i++){
		printf("tab[%d]=%d\n ", i,*(tab+i));
	}
}

void tritab(int*tab){
	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
			if(tab[i]<tab[j]){
			int t;
			t=tab[i];
			tab[i]=tab[j];
			tab[j]=t;
		}
		}
	}
}

void tritabH(int*tab){
	for(int i=0;i<10;i++){
		for(int j=0;j<10-i-1;j++){
			if(tab[j]<tab[j+1]){
				int t;
				t=tab[j];
				tab[j]=tab[j+1];
				tab[j+1]=t;
			}
		}
	}
}

void affichetritab(int*tab){
	for(int i=0;i<10;i++){
		printf("[%d]",*(tab+i));
	}
}
