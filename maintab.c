
#define NMAX 1000000
#include <stdlib.h>
#include <stdio.h>
#include "tab.h"
#include <sys/time.h>
#include <sys/resource.h>

void PrintMem(){
	struct rusage usage;
	getrusage(RUSAGE_SELF, &usage);
	printf("Mémoire occupée : %ld\n",usage.ru_maxrss);
}


int main(int argc,char **argv){
	int tableau[NMAX];
	PrintMem();
	InitTab(tableau,NMAX);
	//PrintTab(tableau,NMAX);
	PrintMem();
	int min;
	printf("Somme du tableau = %d\n",MinSumTab(&min,tableau,NMAX));
	printf("Minimum du tableau = %d\n",min);
	int *adr;
	adr = malloc(NMAX); /*adresse de la zone mémoire alloué sur le tas
	soit Nmax entiers */
	InitTab(adr,NMAX);
	//PrintTab(adr,NMAX);

	return 0;
}