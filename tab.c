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