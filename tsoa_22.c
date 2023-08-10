#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	printf("Deviner un nombre entre 1 et 100 avec au plus 7 coups\n");
	
/*///Initialisation du générateur de nombre aléatoire
	srand(time(NULL));
	printf("\nRAND_MAX=%d\ntime=%ld\n",RAND_MAX, time(NULL));tt
	
///Générer 10 nombres aléatoire < RAND_MAX
	for(int i=0;i<=10;i++){
		printf("%d\t", rand());
	}
	printf("\n");
///Générer des nombres entre 1 et 100: cf. Numerical recipes
	printf("Nombres de 1 a 100\n");
	for(int i=0;i<10;i++){
		printf("%d\t", 1+(int)((100.0*rand())/(RAND_MAX+1.0)));
	}
*/
	
	int n=0, nombre=0, coup=7;
	
	
	srand(time(NULL));
	nombre=1+(int)((100.0*rand())/(RAND_MAX+1.0));
	
	while(n!=nombre && coup>=0){
		
		printf("Entrez un nombre n\n");
		scanf("%d", &n);
		coup--;
	
		if(n<nombre){
			printf("Le nombre est plus grand\n");
		}	
		else if(n>nombre){
			printf("Le nombre est plus petit\n");
		}
		else{
			printf("Vous avez gagne en %d coup, felicitation\n", 7-coup);
		}
		if(coup==0){
			printf("Le nombre de 7 coup a ete depasse, vous avez perdu\n");
			break;
		}
	}
	
	return 0;
}
		
	
