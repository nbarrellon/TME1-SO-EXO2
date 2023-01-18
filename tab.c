#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "tab.h"


void InitTab(int *tab,int size){
	srand(time(NULL));
	for (int i=0;i<size;i++){
		tab[i] = rand()%10;
	}
}
/* commentaire */
void PrintTab(int *tab,int size){
	for (int i=0;i<size;i++){
		printf("%d  ",tab[i]);
	}
	printf("\n");
}

int SumTab(int *tab,int size){
	int somme = 0;
	for (int i=0;i<size;i++){
		somme = somme + tab[i];
	}
	return somme;

}

int MinSumTab(int *min,int *tab,int size){
	*min = tab[0];
	for (int i=1;i<size;i++){
		if (*min>tab[i]) *min=tab[i];
	}
	return SumTab(tab,size);

}