#include<stdio.h>
void changeU(int dim, float* u);
void diplay(int n, float* u, float* v, float prod);
float pscal(int dim, float* u, float* v);
int main(){
	printf("Calcul du produit scalaire de deux vecteurs\n");
/// Données
	int dim=3;                            // La dimension des vecteurs                    
	float u[3]={1., 2., 3.},              // déclaration de tableau de type float 
	      v[3]={1., 4., 5.};
	float prod=0.35;                      // le produit scalaire
	changeU(dim, u);

/// Calcul
/*
	prod=0;
	for(int i=0;i<dim;i++){
		prod+=(u[i]*v[i]);
	}
*/
	prod=pscal(dim, u, v);
/// Resultat
	diplay(dim, u, v, prod);
	printf("Le produit scalaire de ces deux vecteurs est %f\n", prod);


	return 0;
}

void changeU(int dim, float* u){
	//u[2]=5;                //écriture tableau
	*(u+2)=5;

}
void diplay(int dim, float* u, float* v, float prod){
	printf("u=\n");
	for(int i=0;i<dim;i++){
		//printf("u[%d]=%f\n", i, u[i]);
		printf("u[%d]=%f\n", i, *(u+i));
	}
	printf("v=\n");
	for(int i=0;i<dim;i++){
		//printf("v[%d]=%f\n", i, v[i]);
		printf("V[%d]=%f\n", i, *(v+i));
	}
}
float pscal(int dim, float* u, float* v){
	float prod=567;
	prod=0;
	for(int i=0;i<dim;i++){
		prod+=(u[i]*v[i]);
	}
	return prod;
}
