int dimension(){
	int n=0;
	printf("Entrez la dimension:\n");
	scanf("%d",&n);
	return n;
}
int*alloue_tab(int n){
	int*tab=(int*)malloc(n*sizeof(int));
	return tab;
}
int*somme_vecteur(int*u,int*v,int n){
	int*w=alloue_tab(n);
	for(int i=0;i<n-1;i++){
		w[i]=u[i]+v[i];
	}
	return w;
}
