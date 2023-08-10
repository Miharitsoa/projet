#include<stdio.h>

int main(){
	float n;
	int i,t;
	printf("Entrer un nombre\n");
	t=scanf("%f",&n);
	if(t){
		do{
			printf("Entrer un nombre n=\n");
			scanf("%f", &n);
			i=(int)n;
			if(n==i){
				printf("ce nombre est entier\n");
			}
		}while(n!=i);
	}

	return 0;
}
