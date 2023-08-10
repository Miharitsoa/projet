#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	FILE*fp,fp1,fp2;
	fp=fopen("/etc/passwd","r");
	srand(time(NULL));
